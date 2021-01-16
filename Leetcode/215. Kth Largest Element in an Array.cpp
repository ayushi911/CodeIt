// 215. Kth Largest Element in an Array
// Ques Link: https://leetcode.com/problems/kth-largest-element-in-an-array/
//------------------------------------------SOLUTION-----------------------------------------
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
       sort(nums.begin(),nums.end(),greater<int>{});
        return nums[k-1];
    }
};
