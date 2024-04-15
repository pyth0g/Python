import requests
from http import HTTPStatus

url = input("Target > ")
payload = input("Payload > ")

headers = {
    "Accept": "*/*",
    "Accept-Language": "en-US,en;q=0.5",
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/98.0.4758.82",
    "Content-Type": "application/json"
}

try:
    r = requests.post(url, data=payload, headers=headers)
    print(f"{r.status_code} {HTTPStatus(r.status_code).phrase}")
    if r.status_code == 200:
        print("Response:", r)
    else:
        print("Response:", r)
except Exception as e:
    print(e)