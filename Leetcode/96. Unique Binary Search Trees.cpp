/*
96. Unique Binary Search Trees

Given n, how many structurally unique BST's (binary search trees) that store values 1 ... n?

Example:

Input: 3
Output: 5
Explanation:
Given n = 3, there are a total of 5 unique BST's:

   1         3     3      2      1
    \       /     /      / \      \
     3     2     1      1   3      2
    /     /       \                 \
   2     1         2                 3
   
   -----------------------SOLUTION--------------------*/
   class Solution {
public:
    int numTrees(int n) {
        if(n<2)return 1;
        vector<int> sol(n+1,0);
        sol[0]=1;
        sol[1]=1;
        for(int i=2;i<=n;i++){
            for(int j=0;j<i;j++)
                sol[i] += sol[j]*sol[i-j-1];
        }
        return sol[n];
    }
};
