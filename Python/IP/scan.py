import ip

success,ips = ip.Scan.Generate("all")

nl = "\n"

print(f"Scanned {ips} ip addresses.\nThere were {len(success)} up:\n{f'{nl}'.join(success)}")