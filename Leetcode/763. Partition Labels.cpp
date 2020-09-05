/*
763. Partition Labels

A string S of lowercase English letters is given. We want to partition this string into as many parts as possible so that each letter appears in at most one part,
and return a list of integers representing the size of these parts.

 
Example 1:

Input: S = "ababcbacadefegdehijhklij"
Output: [9,7,8]
Explanation:
The partition is "ababcbaca", "defegde", "hijhklij".
This is a partition so that each letter appears in at most one part.
A partition like "ababcbacadefegde", "hijhklij" is incorrect, because it splits S into less parts.
 

Note:

S will have length in range [1, 500].
S will consist of lowercase English letters ('a' to 'z') only.

---------------------------------------------SOLUTION----------------------------------------------*/
class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n =s.length();
        vector<int> op;
        if(n==0) return op;
        int index[26];
        for(int i=0;i<n;++i){
            index[s[i]-'a']=i;
        }
        int start=0,end=0;
        for(int i=0;i<n;++i){
            end=max(end,index[s[i]-'a']);
            if(end==i){
                op.push_back(end-start+1);
                start=end+1;
            }
        }
        return op;
    }
};
