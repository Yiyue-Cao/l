#!/usr/bin/env python3
"""Verify the organized archive, or export an exact pre-organization copy."""
import argparse
from contextlib import ExitStack
import hashlib
import json
from pathlib import Path
import shutil
import zipfile


def digest(data):
    return hashlib.sha256(data).hexdigest()


def safe_path(root, relative):
    path = root / relative
    if Path(relative).is_absolute() or not path.resolve().is_relative_to(root.resolve()):
        raise ValueError(f"Unsafe manifest path: {relative}")
    return path


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    action = parser.add_mutually_exclusive_group(required=True)
    action.add_argument('--check', action='store_true', help='Verify without creating files')
    action.add_argument('--output', type=Path, help='New directory outside the organized archive')
    args = parser.parse_args()
    root = Path(__file__).resolve().parent.parent
    receipts = root / '07_清单与回执' / '本次整理_20261114'
    manifest = json.loads((receipts / '路径映射与核验.json').read_text())
    output = args.output.expanduser().resolve() if args.output else None
    if output is not None:
        if output.exists() or output.is_relative_to(root):
            parser.error('输出目录必须尚不存在，且位于当前资料目录之外。')
    with ExitStack() as stack:
        originals = stack.enter_context(zipfile.ZipFile(receipts / '整理前Markdown.zip'))
        retired = []
        relocated = {}
        for name in ['精简记录_20261114.json', 'comm5合并记录_20261114.json',
                     'Markdown公式修复_20261114.json', '事件深化文档更新_20261114.json', '持续深化文档更新_20261114.json', '语言精修文档更新_20261114.json']:
            cleanup = root / '07_清单与回执' / name
            if not cleanup.exists():
                continue
            info = json.loads(cleanup.read_text())
            package = safe_path(root.parent, info['archive_relative_to_1008'])
            if digest(package.read_bytes()) != info['archive_sha256']:
                raise ValueError(f'归档哈希不符：{package}')
            retired.append(stack.enter_context(zipfile.ZipFile(package)))
            for entry in info.get('files', []):
                if entry.get('old_path') and entry.get('new_path'):
                    relocated[entry['old_path']] = entry['new_path']
        archived = set(originals.namelist())

        def organized_bytes(row):
            paths = [row['new_path']]
            if row['new_path'] in relocated:
                paths.append(relocated[row['new_path']])
            for name in paths:
                current = safe_path(root, name)
                if current.is_file():
                    data = current.read_bytes()
                    if digest(data) == row['sha256_after']:
                        return data
            for package in reversed(retired):
                if row['new_path'] in package.namelist():
                    data = package.read(row['new_path'])
                    if digest(data) == row['sha256_after']:
                        return data
            raise ValueError(f"找不到匹配历史哈希的文件：{row['new_path']}")

        # Check every input before creating an export. Do not execute any artifact.
        for row in manifest['files']:
            data = organized_bytes(row)
            before = originals.read(row['old_path']) if row['old_path'] in archived else data
            if digest(before) != row['sha256_before'] or len(before) != row['bytes_before']:
                raise ValueError(f"原文件无法精确恢复：{row['old_path']}")
        if output is not None:
            output.mkdir(parents=True, exist_ok=False)
            for directory in manifest['directories_before']:
                safe_path(output, directory).mkdir(parents=True, exist_ok=True)
            for row in manifest['files']:
                target = safe_path(output, row['old_path'])
                target.parent.mkdir(parents=True, exist_ok=True)
                if row['old_path'] in archived:
                    target.write_bytes(originals.read(row['old_path']))
                else:
                    target.write_bytes(organized_bytes(row))
                target.chmod(row['mode_before'])
                if digest(target.read_bytes()) != row['sha256_before']:
                    raise ValueError(f"导出校验失败：{target}")
    print(json.dumps({'files_verified': len(manifest['files']),
                      'original_bytes': manifest['original_bytes'],
                      'exported_to': str(output) if output else None,
                      'status': 'passed'}, ensure_ascii=False, indent=2))


if __name__ == '__main__':
    main()
