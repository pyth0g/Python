import requests
from bs4 import BeautifulSoup
import random
from summarize import Summary

url = "https://thehackernews.com/"
headers = {'Accept' : '*/*','Accept-Language': 'en-US,en;q=0.5','User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/98.0.4758.82',}

titles = []
links = []
contents = []

data = BeautifulSoup(requests.get(url, headers = headers, params = url).text, "lxml")
mainClass = data.find_all("main", {"class": "main clear"})
for main in mainClass:
    divClass = main.find_all("div", {"class": "main-box clear"})
    for div in divClass:
        aClass = div.find_all("a", {"class": "story-link"})
        for a in aClass:
            link = a.get("href")
            home_title = a.find_all("h2", {"class": "home-title"})
            for title in home_title:
                title = title.get_text(strip=True)
                titles.append(title)
                links.append(link)

rand = random.randint(0,len(titles))-1
page = BeautifulSoup(requests.get(links[rand], headers = headers, params = links[rand]).text, "lxml")
pageContent = page.find_all("p")
for content in pageContent:
    contents.append(content.get_text(strip=True))
content = "".join(contents)

summary = Summary.summarize(content).replace('"',"")

print(f"--{titles[rand]}--\n {links[rand]}\n-{'-'*(len(links[rand]))}-\n{summary}")