import requests
from bs4 import BeautifulSoup

def get():
    url = "https://weather.com/weather/today/l/SIXX0002:1:SI?Goto=Redirected"
    headers = {'Accept' : '*/*','Accept-Language': 'en-US,en;q=0.5','User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/98.0.4758.82',}
    try:
        data = BeautifulSoup(requests.get(url, headers = headers, params = url).text, "lxml")
    except:
        return ""
    mainClass = data.find_all("main", {"class": "region-main regionMain DaybreakLargeScreen--regionMain--1FzNI"})
    for main in mainClass:
        currentConditions = main.find_all("div", {"class": "CurrentConditions--primary--2DOqs"})
        for condition in currentConditions:
            temp = condition.find("span", {"class": "CurrentConditions--tempValue--MHmYY"})
            if temp:
                temp = temp.get_text(strip=True).replace("°","")
                #Convert to Celsius
                temp = round((int(temp)-32) * 5/9)
            weather = condition.find("div", {"class": "CurrentConditions--phraseValue--mZC_p"})
            if weather:
                weather = weather.get_text(strip=True)

    return f"{temp}°C\n{weather}"