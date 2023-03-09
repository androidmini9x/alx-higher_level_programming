#!/usr/bin/python3
import sys
if __name__ == "__main__":
    argc = len(sys.argv)
    sum = 0
    for x in range(argc - 1):
        sum += int(sys.argv[x + 1])
    print(sum)
