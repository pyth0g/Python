import os
import base64
def send(code):
    global downloadvbs
    downloadvbs = code
    downloadvbs = base64.b64encode(downloadvbs.encode('utf-8'))
    downloadvbs = downloadvbs.decode('utf-8')
def getcode():
    return downloadvbs