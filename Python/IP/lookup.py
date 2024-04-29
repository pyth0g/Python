from ip import Lookup
from os import system

while True:
    IP = input("ip > ")

    try:
        HOSTNAME,CITY,REGION,LOCATION,ORG,POSTAL,TIMEZONE = Lookup.lookup(IP)
    except:
        print("Doesn't exist or is a home address")
        continue

    location = LOCATION
    location = ",".join(location)

    maps = f"https://www.google.com/maps/place/{location}"

    system("cls")

    print(f"INFO: {IP}\n{'-'*len('INFO: {IP}')}\nHostname: {HOSTNAME}\nCity: {CITY}\nRegion: {REGION}\nLocation: {location}\nGoogle Maps Link: {maps}\nOrg: {ORG}\nPostal: {POSTAL}\nTimezone: {TIMEZONE}")
