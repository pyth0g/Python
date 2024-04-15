from decimal import Decimal, localcontext

class Encode:
    def __init__(self) -> None:
        pass
    
    @staticmethod
    def Encode(text, key):
        key = Decimal(str(key))
        num = Decimal(str(_Conversion._TxtToNum(text)))
        with localcontext() as ctx:
            ctx.prec = 10000
            result = num * key
        return format(result, 'f').rstrip('0').rstrip('.')
    
class Decode:
    def __init__(self) -> None:
        pass
    
    @staticmethod
    def Decode(num,key):
        key = Decimal(str(key))
        num = Decimal(str(num))
        with localcontext() as ctx:
            ctx.prec = 10000
            decoded_num = num / key
        return _Conversion._NumToTxt(format(decoded_num, 'f').rstrip('0').rstrip('.'))

class _Conversion:
    def __init__(self) -> None:
        pass

    def _TxtToNum(text):
        numbers = [ord(char) for char in text]
        for num in numbers:
            pos = numbers.index(num)
            padding = 7 - len(str(num))
            numbers[pos] = f"{padding}{'0'*padding}{num}"
        return "".join(numbers)
    
    def _NumToTxt(num):
        num = str(num)
        pos = 0
        numbers = []
        while True:
            try:
                padding = int(num[pos])
                bit = (num[pos:pos+8])[1:]
                number = bit.replace("0","",padding)
                numbers.append(number)
                pos += 8
            except IndexError:
                break
        text = ''.join(chr(int(number)) for number in numbers)
        return text