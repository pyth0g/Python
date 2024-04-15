import base64

file =  input("File Path > ")

with open(file, 'rb') as image_file:
    image_data = image_file.read()

image_base64 = base64.b64encode(image_data).decode()

print(image_base64)