#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c, k):
    next_cloud = -1
    r = []
    while next_cloud != 0:
        if next_cloud == -1:
            next_cloud = (0 + k) % len(c)
            next_cloud_value = c[next_cloud]
            r.append(next_cloud_value)
        else:
            break_condition = next_cloud + k
            next_cloud = (next_cloud + k) % len(c)
            next_cloud_value = c[next_cloud]
            r.append(next_cloud_value)
            if break_condition > len(c):
                break
    print(r) 
    return 100 - (r.count(1) * 2 + r.count(0) + r.count(1))
    
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nk = input().split()

    n = int(nk[0])

    k = int(nk[1])

    c = list(map(int, input().rstrip().split()))

    result = jumpingOnClouds(c, k)

    fptr.write(str(result) + '\n')

    fptr.close()
