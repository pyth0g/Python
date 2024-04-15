import requests
from bs4 import BeautifulSoup
from datetime import datetime

year = datetime.now().year
month = datetime.now().month
day = datetime.now().day
hour = 0

combine = []
final = f"\n       |{month}/{day}/{year}\n       |{'-'*len(f'{month}/{day}/{year}')}"

if len(str(day)) == 1:
    day = f"0{day}"

if len(str(month)) == 1:
    month = f"0{month}"

url = "https://www.easistent.com/urniki/3c3e3db1f45a23086272cf9d805737a32f0fc053/razredi/538177/dijak/8354422"
headers = {
            'Accept' : '*/*',
            'Accept-Language': 'en-US,en;q=0.5',
            'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/98.0.4758.82',
        }

content = requests.get(url, headers = headers, params = url).text
soup = BeautifulSoup(content, "lxml")
for class_num in range(7):
    today = soup.find_all("td",{"id": f"ednevnik-seznam_ur_teden-td-{class_num}-{year}-{month}-{day}"})
    for element in today:
        class_ = element.find_all("div", {"class": "ednevnik-seznam_ur_teden-urnik"})
    
    for element in class_:
        other = element.find_all("div", {"class": "text11"})
        name = element.find_all("span")

    for element in name:
        try:
            name = element.get_text(strip=True)
        except AttributeError:
            break

    for element in other:
        try:
            other = element.get_text(strip=True)
        except AttributeError:
            break

    if hour == 0:
        hour_word = "Predura"
    else:
        hour_word = f"{hour}. ura "

    if other != []:
        combine.append(f"\n{hour_word}|{name}\n-------|{' v'.join(str(other).split(','))}")
    else:
        break

    hour += 1

for element in combine:
    final += element

print(final)