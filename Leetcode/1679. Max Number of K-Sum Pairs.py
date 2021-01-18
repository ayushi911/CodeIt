# 1679. Max Number of K-Sum Pairs
# ques Link: https://leetcode.com/problems/max-number-of-k-sum-pairs/
#-------------------------------------------------SOLUTION------------------------------------------
class Solution:
    def maxOperations(self, nums: List[int], k: int) -> int:
        nums.sort()
        i=0
        j=len(nums)-1
        count=0
        while(i<j):
            if nums[i]+nums[j]==k:
                count+=1
                i+=1
                j-=1
            elif nums[i]+nums[j]<k:
                i+=1
            elif nums[i]+nums[j]>k:
                j-=1
        return count
        
        
