import argparse
parser = argparse.ArgumentParser()
parser.add_argument('-p', '--print', dest='message', help='Print a message')
args = parser.parse_args()
if args.message:
    print(args.message)