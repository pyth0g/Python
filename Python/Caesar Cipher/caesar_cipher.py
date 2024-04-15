class Cipher:
    def _en_overflow(current: str, shift: int) -> str:
        current = ord(current)
        if current >= 97 and current <= 122:
            return (current + shift - 97) % 26 + 97
        
        if current >= 65 and current <= 90:
            return (current + shift - 65) % 26 + 65
        
        return current
    
    def _de_overflow(current: str, shift: int) -> str:
        current = ord(current)
        if current >= 97 and current <= 122:
            return (current - shift - 97) % 26 + 97
        
        if current >= 65 and current <= 90:
            return (current - shift + 65) % 26 + 65
        
        return current

    def encode(text: str, shift: int) -> str:
        ascii_arr = [Cipher._en_overflow(i,shift) for i in text]
        
        return ''.join([chr(i) for i in ascii_arr])
    
    def decode(text: str, shift: int):
        ascii_arr = [Cipher._de_overflow(i,shift) for i in text]

        return ''.join([chr(i) for i in ascii_arr])