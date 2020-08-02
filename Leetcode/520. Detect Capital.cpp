/*
520. Detect Capital


Given a word, you need to judge whether the usage of capitals in it is right or not.

We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Otherwise, we define that this word doesn't use capitals in a right way.
 

Example 1:

Input: "USA"
Output: True
 

Example 2:

Input: "FlaG"
Output: False
 

Note: The input will be a non-empty word consisting of uppercase and lowercase latin letters.

----------------------------------------------SOLUTION-----------------------------------------------*/
class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.length();
        int i=0,j=1,k=0;
        while(i<n){
            if(int(word[i])>=65 && int(word[i])<=90)++i;
            else break; 
        }
        if(int(word[0])>=65 && int(word[0])<=90){
            while(j<n){
            if(int(word[j])>=97 && int(word[j])<=122)++j;
            else break; 
            }   
        }
        while(k<n){
            if(int(word[k])>=97 && int(word[k])<=122)++k;
            else break; 
        }
        int l=1;
        if(i==n ||j==n|| k==n)l=0;
        return l==0;
    }
};
