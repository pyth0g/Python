import nmap
import time
import os
from progress.bar import Bar

first = input("max: 192.168.")
second = input(f"max: 192.168.{first}.")
first = int(first) + 1
second = int(second) + 1
os.system("cls")

def scan_local_network():
    nm = nmap.PortScanner()
    devices = []

    total_scans = 0
    total_time = 0

    # Calculate the total number of scans
    total_scans_to_run = first * second

    # Initialize the progress bar
    with Bar('Scanning', max=total_scans_to_run, suffix='%(percent).1f%%') as bar:
        for i in range(first):
            for j in range(second):
                ip = f"192.168.{i}.{j}"
                start_time = time.time()
                nm.scan(hosts=ip, arguments="-sn")
                end_time = time.time()

                scan_time = end_time - start_time
                total_time += scan_time
                total_scans += 1
                average_scan_time = total_time / total_scans
                remaining_scans = total_scans_to_run - total_scans
                estimated_remaining_time_seconds = average_scan_time * remaining_scans
                estimated_remaining_time_minutes = estimated_remaining_time_seconds / 60

                os.system("cls")
                print(f"\nRemaining: {estimated_remaining_time_minutes:.0f} min")
                print(f"Scanning: {ip}")
                bar.next()

    for host in nm.all_hosts():
        address_info = nm[host]['addresses']
        device_info = {"ip": host, "mac": address_info.get('mac', 'N/A')}
        devices.append(device_info)

    return devices

def main():
    devices = scan_local_network()

    print("\nIP Addresses and MAC Addresses on the Local Network:")
    print("----------------------------------------------------")
    for device in devices:
        print(f"IP Address: {device['ip']}, MAC Address: {device['mac']}")

if __name__ == "__main__":
    main()