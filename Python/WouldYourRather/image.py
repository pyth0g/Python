from PIL import Image, ImageDraw, ImageFont
from bing_image_downloader import downloader
import shutil

def create(item1,item2):
    img = Image.open("Template.png")

    try:
        shutil.rmtree("img1")
        shutil.rmtree("img2")
    except FileNotFoundError:
        pass

    downloader.download(item1, 1, "img1")
    downloader.download(item2, 1, "img2")

    font = ImageFont.truetype('impact.ttf', 80)

    size = (int(img.width/2), int(img.height/4))

    try:
        img1 = Image.open(f"img1\\{item1}\\Image_1.jpg").resize(size)
    except FileNotFoundError:
        try:
            img1 = Image.open(f"img1\\{item1}\\Image_1.jpeg").resize(size)
        except FileNotFoundError:
            try:
                img1 = Image.open(f"img1\\{item1}\\Image_1.png").resize(size)
            except FileNotFoundError:
                try:
                    img1 = Image.open(f"img1\\{item1}\\Image_1.webp").resize(size)
                except FileNotFoundError:
                    img1 = Image.open(f"img1\\{item1}\\Image_1.gif").resize(size)

    ImageDraw.Draw(img).text((round((img.width/2)-(len(item1)*19)), 5), item1.upper(), font=font, fill=(255, 255, 255))
    try:
        img2 = Image.open(f"img2\\{item2}\\Image_1.jpg").resize(size)
    except FileNotFoundError:
        try:
            img2 = Image.open(f"img2\\{item2}\\Image_1.jpeg").resize(size)
        except FileNotFoundError:
            try:
                img2 = Image.open(f"img2\\{item2}\\Image_1.png").resize(size)
            except FileNotFoundError:
                try:
                    img2 = Image.open(f"img2\\{item2}\\Image_1.webp").resize(size)
                except FileNotFoundError:
                    img2 = Image.open(f"img2\\{item2}\\Image_1.gif").resize(size)

    ImageDraw.Draw(img).text((round((img.width/2)-(len(item2)*19)), img.height - 100), item2.upper(), font=font ,fill=(255, 255, 255))

    img.paste(img1, (round(img.width/4), 200))
    img.paste(img2, (round(img.width/4), img.height - img2.height - 200))

    return img