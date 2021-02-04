//594. Longest Harmonious Subsequence
//Ques Link: https://leetcode.com/problems/longest-harmonious-subsequence/
//----------------------------------------SOLUTION-----------------------------------
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> ft;
        for(auto n:nums)
            ft[n]++;
        int m=0;
        for(auto [num,f]:ft){
            if(ft.find(num+1)!=ft.end())
                m=max(m,f+ft[num+1]);
        }
        return m;
    }
};
