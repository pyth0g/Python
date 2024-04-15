import requests
import datetime
from bs4 import BeautifulSoup
import random
from summarize import Summary

class _Get:
    def __init__(self):
        self.rand = 0
        self.links = []

    @classmethod
    def _get(self):
        url = f"https://thehackernews.com/search?updated-max={datetime.datetime.today().year}-{datetime.datetime.today().month}-{datetime.datetime.today().day}&max-results=100"
        headers = {'Accept' : '*/*','Accept-Language': 'en-US,en;q=0.5','User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/98.0.4758.82',}

        titles = []
        self.links = []
        contents = []
        try:
            data = BeautifulSoup(requests.get(url, headers = headers, params = url).text, "lxml")
        except:
            return ""
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
                        self.links.append(link)

        self.rand = random.randint(0,len(titles))-1
        try:
            page = BeautifulSoup(requests.get(self.links[self.rand], headers = headers, params = self.links[self.rand]).text, "lxml")
        except:
            return ""
        pageContent = page.find_all("p")
        for content in pageContent:
            contents.append(content.get_text(strip=True))
        content = "".join(contents)

        try:
            import time
            start = time.time()
            summary = Summary.summarize(content)
            end = time.time()
            print(f"Summary took {((end - start) * 1000.0)} ms")
        except:
            summary = ""

        return self.rand,self.links,titles,summary

class _Prep:
    rand = None
    links = None
    titles = None
    summary = None

    @classmethod
    def start(cls):
        cls.rand, cls.links, cls.titles, cls.summary = _Get._get()

    @classmethod
    def _refresh(cls):
        cls.start()
        News.get()


class News:
    def get():
        _Prep.start()
        obj = _Prep
        if "hackernews" in obj.links[obj.rand]:
            return f"{obj.titles[obj.rand]}: {obj.summary}"
        else:
            _Prep._refresh()
        
    def link():
        obj = _Prep()
        if _Prep.links is None or _Prep.rand is None:
            _Prep.start()
        return obj.links[obj.rand]