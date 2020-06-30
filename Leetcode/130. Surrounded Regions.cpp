/*
130. Surrounded Regions

Given a 2D board containing 'X' and 'O' (the letter O), capture all regions surrounded by 'X'.

A region is captured by flipping all 'O's into 'X's in that surrounded region.

Example:

X X X X
X O O X
X X O X
X O X X
After running your function, the board should be:

X X X X
X X X X
X X X X
X O X X
Explanation:

Surrounded regions shouldn’t be on the border, which means that any 'O' on the border of the board are not flipped to 'X'.
Any 'O' that is not on the border and it is not connected to an 'O' on the border will be flipped to 'X'. 
Two cells are connected if they are adjacent cells connected horizontally or vertically.
-----------------------------------------SOLUTION----------------------------------------*/
class Solution {
public:
    void dfs(vector<vector<char>>& b , int i, int j , int n, int m){
        if(i<0 || j<0 || i>=n || j>=m)return;
        if(b[i][j]=='X' || b[i][j]=='*')return;
        b[i][j]='*';
        dfs(b, i+1,j,n,m);
        dfs(b, i-1,j,n,m);
        dfs(b, i,j+1,n,m);
        dfs(b, i,j-1,n,m);
    }
    void solve(vector<vector<char>>& b) {
        int n=b.size();
        if(n==0)return;
        int m=b[0].size();
        int i,j;
        for(i=0;i<n;i++)
            for(j=0;j<m;j++){
                if(b[i][j]=='O' && (i==0 || j==0 || i==n-1 || j==m-1))
                    dfs(b,i,j,n,m);
            }
        for(i=0;i<n;i++)
            for(j=0;j<m;j++){
                if(b[i][j]=='*')b[i][j]='O';
                else b[i][j]='X';
            }
    }
};
