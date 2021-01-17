#1641. Count Sorted Vowel Strings
# Ques Link: https://leetcode.com/problems/count-sorted-vowel-strings/
#------------------------------------SOLUTION--------------------------------
class Solution:
    def countVowelStrings(self, n: int) -> int:
        return int((n+1)*(n+2)*(n+3)*(n+4)/24)
        
