//881. Boats to Save People
// Ques Link: https://leetcode.com/problems/boats-to-save-people/
//-----------------------------------------SOLUTION-----------------------------------------
class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int n=people.size();
        int l=0, r=n-1,ans=0;
        while(l<=r){
            if(people[l]+people[r]<=limit)
                l++;
            r--;
            ans++;
        }
        return ans;
    }
};
