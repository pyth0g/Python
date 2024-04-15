import encoding as ec
import random

key = random.randrange(100000000000,999999999999)

print(key)

print(f"Encoded: {ec.Encode.Encode(input('Encode > '),key)}")

print(f"Decoded: {ec.Decode.Decode(input('Decode > '),key)}")