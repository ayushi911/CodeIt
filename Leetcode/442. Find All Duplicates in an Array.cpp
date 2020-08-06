/*
442. Find All Duplicates in an Array

Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements that appear twice in this array.

Could you do it without extra space and in O(n) runtime?

Example:
Input:
[4,3,2,7,8,2,3,1]

Output:
[2,3]
-------------------------------------------------------SOLUTION-----------------------------------------------------*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int j=0;
        vector<int>emp;
        if(n==0 || n==1) return emp;
        if(n==2 && nums[0]==nums[1]){emp.push_back(nums[0]); return emp;}
        if(n==2 && nums[0]!=nums[1])return emp;
        else
        { for(int i=1;i<n;++i){
           if(nums[i]==nums[j]){
               res.push_back(nums[j]);} 
            j++;
            }
        }
        return res;
    }
};
