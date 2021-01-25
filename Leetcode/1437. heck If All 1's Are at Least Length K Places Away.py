# 1437.heck If All 1's Are at Least Length K Places Away
# Ques Link: https://leetcode.com/problems/check-if-all-1s-are-at-least-length-k-places-away/
#--------------------------------------------SOLUTION------------------------------------------
class Solution:
    def kLengthApart(self, nums: List[int], k: int) -> bool:
        temp=k
        for i in nums:
            if i==1:
                if temp<k:
                    return False
                temp=0
            else:
                temp+=1
        return True
        
