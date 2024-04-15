class _Print:
    def __init__(self) -> None:
        pass

    last_nrows = None
    def _csi(values: list) -> None:
        csi_up = f"\x1B[{_Print.last_nrows}A"
        csi_clr= "\x1B[0K"
                
        if _Print.last_nrows is None:
            print('\n'*(len(values)-1))
            csi_up = f"\x1B[{len(values)}A"
        else:
            if _Print.last_nrows > len(values):
                print(f'{csi_up}{csi_clr}')
                for r in range(1,_Print.last_nrows): print(f'{csi_clr}')
                
        _Print.last_nrows = len(values)
        print(f'{csi_up}{values[0]}{csi_clr}')
        for r in range(1, len(values)): print(f'{values[r]}{csi_clr}')

class _Input:
    def __init__(self) -> None:
        pass

    def _mli(prompt: str, nl_prompt: str) -> list:
        answ = [input(str(prompt))]

        while True:
            _ = input(nl_prompt)
            if _ == "":
                break
            answ.append(_)

        return answ

class Better:
    def override_print(*values: object,sep: str = " ",nl_sep: str = "\n") -> None:
        last_str = ""
        for value in values:
            if len(values) > 1:
                last_str += str(value) + str(sep) if value != values[-1] else str(value)
                _Print._csi(last_str.split(nl_sep))
            else:
                _Print._csi(str(value).split(nl_sep))

    def multiline_input(prompt:str, nl_prompt: str) -> list:
        return _Input._mli(prompt, nl_prompt)