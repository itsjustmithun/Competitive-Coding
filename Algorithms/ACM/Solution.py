#!/bin/python3

import math
import os
import random
import re
import sys
from collections import defaultdict

# Complete the acmTeam function below.rom collections import defaultdict
def acmTeam(topic):

    Topic = [ [ topic[i][k]=='1' for k in range(m) ] for i in range(n) ]
    c = defaultdict(int)
    for i in range(n):
        for j in range(i+1,n):
            c[sum( Topic[i][k] or Topic[j][k] for k in range(m) )] += 1    
    return max(c), c[max(c)]

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nm = input().split()

    n = int(nm[0])

    m = int(nm[1])

    topic = []

    for _ in range(n):
        topic_item = input()
        topic.append(topic_item)

    result = acmTeam(topic)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
