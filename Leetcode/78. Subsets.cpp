/*
78. Subsets
Given a set of distinct integers, nums, return all possible subsets (the power set).

Note: The solution set must not contain duplicate subsets.

Example:

Input: nums = [1,2,3]
Output:
[
  [3],
  [1],
  [2],
  [1,2,3],
  [1,3],
  [2,3],
  [1,2],
  []
]

------------------------------------SOLUTION---------------------------------------*/
class Solution {
public:
    vector<int> find( int no, vector<int>& nums) {
        vector<int>temp;
        int i=0;
        while(no){
            if(no&1){
                temp.push_back(nums[i]);
            }
            i++;
            no>>=1;
        }
        return temp;
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int size=nums.size();
        vector<vector<int>> res;
        int total=1<<size;
        for(int i=0;i<total;++i){
            vector<int> temp2=find(i,nums);
            res.push_back(temp2);
        }
        return res;
    }
};
