#3.Longest Substring Without Repeating Characters

#Given a string s, find the length of the longest substring without repeating characters.

#Example 1:
#Input: s = "abcabcbb"
#Output: 3
#Explanation: The answer is "abc", with the length of 3.

#Example 2:
#Input: s = "bbbbb"
#Output: 1
#Explanation: The answer is "b", with the length of 1.
#-----------------------------------------------SOLUTION-------------------------------------------
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        max_substr=0
        start=0
        visited={}
        for end in range(len(s)):
            if s[end] in visited:
                start= max(start,visited[s[end]]+1)
            visited[s[end]]=end
            max_substr=max(max_substr, end-start+1)
        return max_substr
