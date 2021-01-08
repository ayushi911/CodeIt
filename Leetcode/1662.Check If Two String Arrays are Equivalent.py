#1662.Check If Two String Arrays are Equivalent


class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        s1=""
        s2=""
        for a in word1:
            s1=s1+a
        for a in word2:
            s2=s2+a
        return s1==s2    
        
        
