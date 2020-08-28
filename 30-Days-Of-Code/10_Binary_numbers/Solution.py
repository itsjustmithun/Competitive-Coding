#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    num = int(input())

result = 0
maximum = 0

while num > 0:
    if num % 2 == 1:
        result += 1
        if result > maximum:
            maximum = result

    else:
        result = 0

    num //= 2

print(maximum)
