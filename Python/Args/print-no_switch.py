import argparse
parser = argparse.ArgumentParser()
parser.add_argument('print', help='Print a message')
args = parser.parse_args()
if args.print:
    print(args.print)