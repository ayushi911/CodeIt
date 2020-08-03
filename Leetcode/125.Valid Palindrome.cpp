/*
125.Valid Palindrome

Given a string, determine if it is a palindrome, considering only alphanumeric characters and ignoring cases.

Note: For the purpose of this problem, we define empty string as valid palindrome.

Example 1:

Input: "A man, a plan, a canal: Panama"
Output: true
Example 2:

Input: "race a car"
Output: false
 

Constraints:

1. s consists only of printable ASCII characters.
----------------------------------------------SOLUTION---------------------------------------------------*/
class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        string str="";
        if(s=="")return true;
        for(int i=0; i<n;++i){
            if((int(s[i])>=48 && int(s[i])<=57) || (int(s[i])>=65 && int(s[i])<=90) || (int(s[i])>=97 && int(s[i])<=122)){
                str+=s[i];
            }
            else continue;
        }
        int m=str.length();
        string low="";
        for(int i=0; i<m;++i){
            if(int(str[i])>=48 && int(str[i])<=57)low+=str[i];
            else low+= tolower(str[i]);
        }
        string temp=low;
        reverse(low.begin(),low.end());
        int x=temp.compare(low);
        return x==0;
    }
};
