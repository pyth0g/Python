import subprocess
import re
import argparse
import sys   
try:
        parser = argparse.ArgumentParser()
        parser.add_argument("address",help="Address to scan ip or domain name.")
        args = parser.parse_args()
        ip = args.address
        print("Scanning...")
        vurnl = False
        nmap_command = f'nmap {ip}'
        output = subprocess.check_output(nmap_command, shell=True, text=True)
        ports = re.findall(r'(\d+)/tcp', output)
        port_list = ','.join(ports)
        vulnerabilities = {
            "20": "-File Transfer Protocol (FTP) port for sending and receiving files. Vulnerabilities include:\n- Brute-forcing passwords\n- Anonymous authentication (using 'anonymous' as username and password)\n- Cross-site scripting\n- Directory traversal attacks",
            "21": "-File Transfer Protocol (FTP) port for sending and receiving files. Vulnerabilities include:\n- Brute-forcing passwords\n- Anonymous authentication (using 'anonymous' as username and password)\n- Cross-site scripting\n- Directory traversal attacks",
            "22": "-Secure Shell (SSH) port for secure server access. Vulnerabilities include:\n- Using leaked SSH keys\n- Brute-forcing credentials",
            "23": "-Telnet port for remote computer connections. Vulnerabilities include:\n- Credential brute-forcing\n- Spoofing\n- Credential sniffing",
            "25": "-Simple Mail Transfer Protocol (SMTP) port for sending and receiving emails. Vulnerabilities include spoofing and spamming.",
            "53": "-Domain Name System (DNS) port, vulnerable to DDoS attacks.",
            "137": "-NetBIOS over TCP port indirectly used by SMB. Vulnerabilities include:\n- Exploitation via EternalBlue exploit\n- Capturing NTLM hashes\n- Brute-forcing SMB login credentials",
            "139": "-NetBIOS over TCP port indirectly used by SMB. Vulnerabilities include:\n- Exploitation via EternalBlue exploit\n- Capturing NTLM hashes\n- Brute-forcing SMB login credentials",
            "445": "-Server Message Block (SMB) port, directly used by SMB. Vulnerabilities include:\n- Exploitation via EternalBlue exploit\n- Capturing NTLM hashes\n- Brute-forcing SMB login credentials",
            "80": "-HTTP port. Vulnerabilities include:\n- Cross-site scripting\n- SQL injections\n- Cross-site request forgeries\n- DDoS attacks",
            "443": "-HTTPS port. Vulnerabilities include:\n- Cross-site scripting\n- SQL injections\n- Cross-site request forgeries\n- DDoS attacks",
            "8080": "-HTTP port. Vulnerabilities include:\n- Cross-site scripting\n- SQL injections\n- Cross-site request forgeries\n- DDoS attacks",
            "8443": "-HTTP port. Vulnerabilities include:\n- Cross-site scripting\n- SQL injections\n- Cross-site request forgeries\n- DDoS attacks",
            "1433": "-SQL Server port. Vulnerabilities include:\n- Distribution of malware\n- Direct DDoS attacks\n- Probing for unprotected databases with exploitable default configurations",
            "1434": "-SQL Server port. Vulnerabilities include:\n- Distribution of malware\n- Direct DDoS attacks\n- Probing for unprotected databases with exploitable default configurations",
            "3306": "-MySQL port. Vulnerabilities include:\n- Distribution of malware\n- Direct DDoS attacks\n- Probing for unprotected databases with exploitable default configurations",
            "3389": "-Remote Desktop port. Vulnerabilities include:\n- Various vulnerabilities in remote desktop protocols\n- Probing for leaked or weak user authentication\n- Use in remote desktop attacks (e.g., BlueKeep vulnerability)"
        }

        ports = port_list.split(",")
        print(f"Scanned: {ip}")
        for port in ports:
            if port in vulnerabilities:
                vurnl = True
                print(f"\033[31;1mVulnerable Port found: \033[36;1m{port}\033[0m\n\033[31mVulnerabilities: \n\033[33m{vulnerabilities[port]}\033[0m\n")
        if vurnl == False:
            print("\n\033[33mNo Vulnerabilities Found!\033[0m\n")
        print("\033[31;1m----END-OF-SCAN----\033[0m")
except KeyboardInterrupt:
    sys.exit(0)