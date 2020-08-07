/*
Given a String of length S, reverse the whole string without reversing the individual words in it. Words are separated by dots.

Input:
The first line contains T denoting the number of testcases. T testcases follow. Each case contains a string S containing characters.

Output:
For each test case, in a new line, output a single line containing the reversed String.

Constraints:
1 <= T <= 100
1 <= |S| <= 2000

Example:
Input:
2
i.like.this.program.very.much
pqr.mno

Output:
much.very.program.this.like.i
mno.pqr
-----------------------------------------------SOLUTION-----------------------------------------------*/
#include <iostream>
#include<algorithm>

using namespace std;

void rev(string st){
  string s=st+'.'; 
  int n=s.length();
  string word="",temp="";
  for(int i=0;i<n;++i){
    if(s[i]!='.'){
      temp+=s[i];
    }
    else{
      string x=temp;
      reverse(x.begin(),x.end());
      x+='.';
      word+=x;
      temp="";
    }
  }
  reverse(word.begin(),word.end());
  for(int i=1;i<word.length();++i)cout<<word[i];
  cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        rev(str);
    }
    return 0;
}
