# 1663. Smallest String With A Given Numeric Value
# Ques Link: https://leetcode.com/problems/smallest-string-with-a-given-numeric-value/
#-----------------------------------------------SOLUTION--------------------------------------------
class Solution(object):
    def getSmallestString(self, n, k):
        p = max(0, (26*n - k - 1)//25)
        q = k - 26*n + 25*p + 26
        return "a"*p + chr(96 + q) + "z"*(n-p-1)
        
