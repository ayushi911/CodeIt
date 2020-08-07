/*
Given a string S consisting of lowercase Latin Letters. Find the first non repeating character in S.

Input:
The first line contains T denoting the number of testcases. Then follows description of testcases.
Each case begins with a single integer N denoting the length of string. The next line contains the string S.

Output:
For each testcase, print the first non repeating character present in string. Print -1 if there is no non repeating character.

Constraints:
1 <= T <= 900
1 <= N <= 104

Example:
Input :
3
5  
hello
12
zxvczbtxyzvy
6
xxyyzz

Output :
h
c
-1
-------------------------------------SOLUTION----------------------------------*/
#include <iostream>
#include<vector>
using namespace std;

void repeat(){
  int locin[26]={0};
  int n;
  char res='A';
  cin>>n;
  char s[n];
  cin>>s;
  for(int i=0;i<n;++i){
    locin[s[i]-'a']+=1;
  }
  /*for(int i=0;i<26;++i){
    cout<<locin[i]<<" ";
  }cout<<endl;*/
  vector<char> temp;
  for(int i=0;i<26;++i){
    if(locin[i]==1){
      temp.push_back(char(int('a')+i));
    }
    else continue;
  }
   /*for(int j=0;j<temp.size();++j){
     cout<<temp[j]<<" ";
   }cout<<endl;*/
  for(int i=0;i<n;++i){
    for(int j=0;j<temp.size();++j){
      if(s[i]==temp[j]){
        res=s[i];
        break;
      }
    }
    if(res!='A')break;
  }
  if(res=='A')cout<<"-1"<<"\n";
  else cout<<res<<"\n";
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    repeat();
	}
	return 0;
}
