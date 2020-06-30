/*
212. Word Search II
Given a 2D board and a list of words from the dictionary, find all words in the board.

Each word must be constructed from letters of sequentially adjacent cell, where "adjacent" cells are those horizontally or vertically neighboring.
The same letter cell may not be used more than once in a word.

Example:

Input: 
board = [
  ['o','a','a','n'],
  ['e','t','a','e'],
  ['i','h','k','r'],
  ['i','f','l','v']
]
words = ["oath","pea","eat","rain"]

Output: ["eat","oath"]
 

Note:

1. All inputs are consist of lowercase letters a-z.
2. The values of words are distinct.
------------------------SOLUTION----------------------------*/
class trie{
public:
    trie* children[26];
    bool eow;
    trie():eow(false){
        for(int i=0;i<26;++i)
            children[i]=nullptr;
    }
    ~trie(){
        for(int i=0;i<26;++i){
            if(children[i]) delete children[i];
        }
    }
    void insert (string word){
        trie* curr = this;
        for(char c: word){
          if(!curr->children[c-'a']) curr->children[c-'a']=new trie();
            curr=curr->children[c-'a'];
        }
        curr->eow= true;
    }
};

class Solution {
    void dfs(vector<vector<char>>& board, int i, int j, unordered_set<string>& result, trie* t, string s){
        char c=board[i][j];
        if(c=='$')return;
        board[i][j]='$';
        trie* tt=t->children[c-'a'];
        if(tt){
            string ss=s+c;
            if(tt->eow) result.insert(ss);
            if(i<board.size()-1) dfs(board, i+1,j,result,tt,ss);
            if(j<board[0].size()-1) dfs(board, i,j+1,result,tt,ss);
            if(i>0) dfs(board, i-1,j,result,tt,ss);
            if(j>0) dfs(board, i,j-1,result,tt,ss);
        }
        board[i][j]=c;
    }
public:
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        if(words.size()==0)return {};
        trie t;
        for(string w: words)
        {t.insert(w);}
        
        unordered_set <string> result;
        for(int i=0;i<board.size();++i)
            for(int j=0; j<board[0].size();++j){
                dfs(board,i,j,result,&t,"");
            }
        
        vector<string> result_f(result.begin(),result.end());
        return result_f;
    }
};
