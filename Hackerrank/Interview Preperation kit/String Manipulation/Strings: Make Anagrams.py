#!/bin/python3
from collections import Counter
import math
import os
import random
import re
import sys

# Complete the makeAnagram function below.
def makeAnagram(s, t):
    l=Counter(s)
    m=Counter(t)
    l.subtract(m)
    return(sum(abs(i) for i in l.values()))

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    a = input()

    b = input()

    res = makeAnagram(a, b)

    fptr.write(str(res) + '\n')

    fptr.close()
