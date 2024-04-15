import weather
import thehackernews
import urnik
import pressed
import os
import ctypes
import time
import threading
import os
from datetime import datetime
from html2image import Html2Image

hti = Html2Image()
hti.size = (1920,1080)

class Bg:
  def __init__(self):
      self.news_use = ""
      self.urnik_use = ""
      Bg.news()
      Bg.urnik()

  @classmethod
  def weather(self):
        self.weather_get = weather.get()

  @classmethod
  def news(self):
        self.news_use = thehackernews.News.get()

  @classmethod
  def urnik(self,add_day=0,sub_day=0):
      day = ((datetime.now().day)+add_day)-sub_day
      self.urnik_use = urnik.get(day)

  @classmethod
  def html(self):
      weather_use = self.weather_get
      news_use = self.news_use
      urnik_use = self.urnik_use
      image = f"{os.getcwd()}\\python.png"
      refresh_image = f"{os.getcwd()}\\refresh.png"
      if weather_use == None:
          weather_use = ""
      if news_use == None:
          news_use = ""
      if urnik_use == None:
          urnik_use = ""
      html = """<!DOCTYPE html>
  <html>
  <head>
    <title>Corner Text</title>
    <style>

      /* Style for the image container */
      .image-container {
        position: absolute;
        top: 50%;
        left: 50%;
        transform: translate(-50%, -50%);
      }

      /* Style for the image container */
      .image-bottom-right {
        position: absolute;
        bottom: 45px;
        right: 70px;
        transform: translate(-50%, -50%);
      }

      /* Style for the top-left corner */
      .top-left {
        position: absolute;
        top: 10px;
        left: 10px;
        font-size: medium;
        font-family: 'Kdam Thmor Pro', sans-serif;
        color: white; /* Set text color to white */
      }

      /* Style for the bottom-left corner */
      .bottom-left {
        position: absolute;
        bottom: 50px;
        left: 10px;
        font-size: smaller;
        font-family: 'Kdam Thmor Pro', sans-serif;
        color: white; /* Set text color to white */
      }

      .bottom-right {
        position: absolute;
        bottom: 50px;
        right: 10px;
        font-size: smaller;
        font-family: 'Kdam Thmor Pro', sans-serif;
        color: white; /* Set text color to white */
      }

      /* Style for the center text */
      .mid-left {
        position: absolute;
        top: 250px;
        left: 5px;
        font-size: larger;
        font-family: 'Kdam Thmor Pro', sans-serif;
        color: white; /* Set text color to white */
      }

      body {
        background-color: black; /* Set background color to black */
      }
    </style>
  </head>
  <body>
    <!-- Top-left corner -->
    <div class="top-left">
      <span style="font-size: larger;">"""+weather_use+"""</span>
    </div>

    <!-- Bottom-left corner -->
    <div class="bottom-left">
      """+news_use+"""
    </div>

    <!-- Bottom-right corner -->
    <div class="bottom-right">
      Visit Page
    </div>

    <!-- Mid left text -->
    <div class="mid-left">
      """+urnik_use+"""
    </div>

    <!-- Image container in the center of the screen -->
    <div class="image-container">
      <img src='"""+image+"""' alt="Local Image">
    </div>

    <div class="image-bottom-right">
      <img src='"""+refresh_image+"""' alt="Local Image">
    </div>
  </body>
  </html>"""
      return html

  def create_img(html):
      try:
          os.remove("background.png")
      except FileNotFoundError:
          pass
      while True:
        try:
          hti.screenshot(html_str=html, save_as='background.png')
          break
        except:
            pass
      Bg.set_background()

  def set_background():
      ctypes.windll.user32.SystemParametersInfoW(20, 0, f"{os.getcwd()}\\background.png" , 0)

  @classmethod
  def refresh(self):
      Bg.create_img(Bg.html())
  
  def start():
    threading.Thread(target=Bg.changeday).start()
    threading.Thread(target=Bg.click_link).start()
    threading.Thread(target=Bg.news_refresh).start()
    while True:
      tn = threading.Thread(target=Bg.news)
      tw = threading.Thread(target=Bg.weather)
      tu = threading.Thread(target=Bg.urnik)

      tn.start()
      tw.start()
      tu.start()
      
      tn.join()
      tw.join()
      tu.join()

      Bg.refresh()
      time.sleep(900)

  def news_refresh():
      while True:
          if pressed.mouse_radius((1832, 1018)):
              Bg.news()
              Bg.urnik()
              Bg.refresh()

  def changeday():
      additionalday = False
      add_day = 0
      while True:
        if pressed.mouse_radius((136,320)) or pressed.mouse_radius((136,292)):
            additionalday = True
            add_day += 1
            Bg.urnik(add_day)
            Bg.refresh()
        if additionalday and (pressed.mouse_radius((18,320)) or pressed.mouse_radius((18,292))):
            add_day -= 1
            Bg.urnik(add_day)
            Bg.refresh()

        if add_day == 0:
            additionalday = False

  def click_link():
      while True:
          link = thehackernews.News.link()
          if pressed.mouse_rect(1851,1009,1910,1024):
              os.system(f"start {link}")
              time.sleep(0.3)

Bg.start()