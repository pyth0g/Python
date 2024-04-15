from urllib.request import urlopen
import json
import re
import socket
import requests
import threading
import subprocess
import os

class Scan:
    @classmethod
    def __init__(self):
        self.success = []

    @classmethod
    def _Request(self,ip,current_ip,success_ip):
        ip = str(ip)
        try:
            if current_ip:
                print(f"IP: {ip}\n")
            result = subprocess.run(f"ping {ip}", stdout=subprocess.PIPE, shell=True, text=True)
            received = re.search(r"Received = (\d+)", result.stdout).group(1)
            if received == 0:
                if success_ip:
                    print(ip)
                self.success.append(ip)
        except:
            pass
    
    @staticmethod
    def _Generate(type,current_ip,success_ip):
        ipcount = 0
        if type == "192":
            for all192 in range(256):
                for i192 in range(256):
                    ip = f"192.168.{all192}.{i192}"
                    threading.Thread(target=Scan._Request,args=(ip,current_ip,success_ip)).start()
                    ipcount += 1
        elif type == "172":
            for all172 in range(16,32):
                for i172 in range(256):
                    for i172_2 in range(256):
                        ip = f"172.{all172}.{i172}.{i172_2}"
                        threading.Thread(target=Scan._Request,args=(ip,current_ip,success_ip)).start()
                        ipcount += 1
        elif type == "10":
            for all10 in range(256):
                for i10 in range(256):
                    for i10_2 in range(256):
                        ip = f"10.{all10}.{i10}.{i10_2}"
                        threading.Thread(target=Scan._Request,args=(ip,current_ip,success_ip)).start()
                        ipcount += 1
        elif type == "all":
            for allall in range(256):
                for iall in range(256):
                    for iall_2 in range(256):
                        for iall_3 in range(256):
                            ip = f"{allall}.{iall}.{iall_2}.{iall_3}"
                            threading.Thread(target=Scan._Request,args=(ip,current_ip,success_ip)).start()
                            ipcount += 1

        else:
            raise TypeError(f"Invalid type '{type}'. Use '192', '172', '10' or 'all'.")
        return ipcount

    @classmethod
    def Generate(self,type,current_ip=False,success_ip=True):
        ipcount = Scan._Generate(type,current_ip,success_ip)
        print("\nCalculating...\n")
        while len(threading.enumerate()) > 1:
            pass
        os.system("cls")
        return self.success,ipcount

class Lookup:
    @staticmethod
    def lookup(IP):
        url = f"https://ipinfo.io/{IP}/json"

        try:
            r = urlopen(url)
            data = json.load(r)
        except:
            raise ValueError("This ip does not exist.")

        try:
            HOSTNAME = data["hostname"]
            CITY = data["city"]
            REGION = data["region"]
            LOCATION = data["loc"]
            ORG = data["org"]
            POSTAL = data["postal"]
            TIMEZONE = data["timezone"]
        except:
            raise ValueError("This ip does not exist or is a home (192.168.*.*) address.")

        return (HOSTNAME,CITY,REGION,LOCATION.split(","),ORG,POSTAL,TIMEZONE)
    
class Get:
    @staticmethod
    def public():
        r = requests.get("https://ident.me")
        return r.text
    
    def private():
        return socket.gethostbyname(socket.gethostname())