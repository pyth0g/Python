user = ""
while user != "exit":
    from bs4 import BeautifulSoup
    import requests
    import re
    import urllib.parse,urllib.request
    import time
    notanswer = True
    all = []
    search_query = input("\033[0;36mInput Search > \033[0m")
    docaptcha = input("\033[0;36mRemove websites that feature a captcha (Y/n) > \033[0m")
    rate = input("\033[0;36mSet a rate (messages per minute) to prevent being rate limited (deafult 10) > \033[0m")
    try:
        delay = 60 / int(rate)
    except:
        rate = 10
        delay = 60 / int(rate)
    while notanswer:
        try:
            pages = int(input("\033[0;36mScan Pages (Recomended max 35 to prevent rate limiting) > \033[0m"))
            notanswer = False
        except:
            print("\033[0;31mInvalid please provide a number.\033[0m")
    for page in range(1,pages+1):
        time.sleep(delay)
        search_query = urllib.parse.quote(search_query)
        url = f'https://www.google.com/search?q={search_query}&oq={search_query}&num={page}'

        headers = {
            'Accept' : '*/*',
            'Accept-Language': 'en-US,en;q=0.5',
            'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/98.0.4758.82',
        }

        content = requests.get(url, headers = headers, params = url).text
        response = requests.get(url)
        soup = BeautifulSoup(content, 'html.parser')
        content = str(soup)
        sorted = []
        final = []
        urls = re.findall(r'https?://[^\s]+', content)
        donecaptcha = True
        for url in urls:
            if "google" not in url.lower():
                if "w3.org" not in url.lower():
                    sorted.append(url.replace("<","").replace(">","").replace("'","").replace('"',""))

        def checkup(response):
            try:
                if response.status_code == "200" or "301" or "302":
                    return True
                else:
                    return False
            except:
                return "INVALID"

        def captcharemover(sorted):
            captcha_keywords = ["captcha", "recaptcha", "robot"]
            for i in sorted:
                time.sleep(delay)
                try:
                    request = requests.get(i).text
                    print(f"\033[1;33mChecking if '{i}' is up.\033[0m")
                    if checkup(response):
                            print(f"\033[0;32m'{i}' is up.\033[0m")
                            if any(keyword in request.lower() for keyword in captcha_keywords):
                                print(f"\033[0;31m'{i}' has a captcha\033[0m")
                                pass
                            else:
                                print(f"\033[0;32m'{i}' doesn't have a captcha\033[0m")
                                final.append(i)
                    else:
                        print(f"\033[0;31m'{i}' in not up.\033[0m")
                except:
                    pass
            return final

        while donecaptcha:
            if docaptcha == "Y":
                donecaptcha = False
                final = captcharemover(sorted)
            elif docaptcha == "n":
                donecaptcha = False
                for i in sorted:
                    print(f"\033[1;33mChecking if '{i}' is up.\033[0m")
                    if checkup(response):
                        print(f"\033[0;32m'{i}' is up.\033[0m")
                        final.append(i)
                    else:
                        print(f"\033[0;31m'{i}' in not up.\033[0m")
            else:
                print("Input a valid option (Y/n)")

        for i in final:
            all.append(i)

        print(f"\033[0;36m\nPage {page} finished\n\033[0m")

    print(f"\033[0;36m\nRESULTS ({len(final)})\n-----------\033[0m")

    for i in all:
        print("\033[0;34m"+i+"\033[0m\n")
    if response.status_code == 429:
        print("\033[0;31mYou Are Sending To Many Requests. Slow Down!\033[0m")
    user = input("")