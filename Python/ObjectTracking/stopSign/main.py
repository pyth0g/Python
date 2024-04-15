from objectTracking import AdvancedFind
import os

if os.path.isfile("out.png"):
    os.remove("out.png")
AdvancedFind.MostConfident("1.jpeg",["2.jpeg","3.png","4.png","5.jpeg"],"out.png",0)