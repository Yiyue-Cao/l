from pathlib import Path
import hashlib, json, re

base = Path(__file__).resolve().parent
generic = base / '通用程序_stockidx_20261114'
manifest = json.loads((generic / 'download_manifest.json').read_text())
source = {r['path']: r for r in json.loads((generic / 'RUN_MANIFEST.json').read_text())['files']}
downloads = []
for r in manifest:
    p = generic / r['relative']
    h = hashlib.sha256(p.read_bytes()).hexdigest()
    downloads.append(dict(file=r['relative'], bytes=p.stat().st_size,
        downloaded_hash_ok=h == r['sha256'],
        source_manifest_hash_ok=(h == source[r['relative']]['sha256']) if r['relative'] in source else None,
        sha256=h))

programs = []
for d in sorted((generic / 'analysis').iterdir()):
    if not d.is_dir():
        continue
    expected = {}
    for row in (d / 'targets.tsv').read_text().splitlines() if (d / 'targets.tsv').exists() else []:
        a, n = row.split('\t', 1)
        expected[a] = n
    results = {}
    for sub in ['decompiled_repaired', 'decompiled_extra', 'decompiled_final', 'decompiled_normalized']:
        idx = d / sub / 'index.tsv'
        if not idx.exists():
            continue
        for row in idx.read_text().splitlines():
            a, status, name = row.split('\t', 2)
            results[a] = dict(status=status, name=name, path=f'{sub}/{a}.c')
    good = {a: r for a, r in results.items() if r['status'] == 'OK' and (d / r['path']).is_file()}
    missing = {a:n for a,n in expected.items() if a not in good}
    warnings = {}
    with (d / '核心伪代码.c').open('w') as out:
        out.write('// Selected exported functions; static decompiler output, not original source.\n')
        for a,r in sorted(good.items()):
            code = (d / r['path']).read_text()
            out.write('\n' + code + '\n')
            for w in re.findall(r'/\* WARNING: (.*?) \*/', code, flags=re.S):
                w = w.split('\n')[0]
                warnings[w] = warnings.get(w, 0) + 1
    log = (d / 'ghidra.log').read_text() if (d / 'ghidra.log').exists() else ''
    programs.append(dict(file=d.name, targets=len(expected), exported_ok=len(set(expected)&set(good)),
        missing_or_failed=missing, final_results=results,
        normalized_exports=sum(r['path'].startswith('decompiled_normalized/') for r in good.values()),
        symbol_bounded='ExportBounded.java' in ((d/'final.log').read_text() if (d/'final.log').exists() else ''),
        autoanalysis_timed_out='Analysis timed out' in log,
        jumptable_overrides=len((d/'repairs.tsv').read_text().splitlines()) if (d/'repairs.tsv').exists() else 0,
        decompiler_warning_counts=warnings))

report = dict(download_count=len(downloads), total_bytes=sum(r['bytes'] for r in downloads),
    download_mismatch=[r['file'] for r in downloads if not r['downloaded_hash_ok']],
    source_manifest_checked=sum(r['source_manifest_hash_ok'] is not None for r in downloads),
    source_manifest_mismatch=[r['file'] for r in downloads if r['source_manifest_hash_ok'] is False],
    binaries=programs, downloads=downloads)
(generic / '反编译验收.json').write_text(json.dumps(report, ensure_ascii=False, indent=2))
print(json.dumps({k:v for k,v in report.items() if k not in ['binaries','downloads']}, ensure_ascii=False))
for p in programs:
    print(p['file'], p['targets'], p['exported_ok'], list(p['missing_or_failed']))
