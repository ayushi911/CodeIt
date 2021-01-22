//1673. Find the Most Competitive Subsequence
// ques Link: https://leetcode.com/problems/find-the-most-competitive-subsequence/
//------------------------------------------SOLUTION--------------------------------------
class Solution {
public:
    vector<int> mostCompetitive(vector<int>& nums, int k) {
        vector<int> stack;
        int nums_to_delete = nums.size()-k;
        for (int i = 0; i < nums.size(); i++) {
            while (!stack.empty() && nums[i] < stack.back() && nums_to_delete) {
                stack.pop_back();
                nums_to_delete--;
            }
            stack.push_back(nums[i]);
        }
        return vector<int>(stack.begin(), stack.begin()+k); 
    }
};
