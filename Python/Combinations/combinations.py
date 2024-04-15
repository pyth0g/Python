from itertools import product

def _calc(symbols,len):
    yield from product(*([symbols] * len))

def generate(symbols,len):
    for x in _calc(symbols,len):
        yield (''.join(x))