#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdio>
#include<string.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    int u=0,l=0;
    int n=s.length();
    for(int i=0;i<n;i++){
      if(int(s[i])>=65 && int(s[i])<=90)
        u++;
      else if(int(s[i])>=97 && int(s[i])<=122)
        l++;
    }
    if(u>l){
       for(int i=0;i<n;i++){
         putchar(toupper(s[i]));
       }
    }
    else if(u<l){
       for(int i=0;i<n;i++){
         putchar(tolower(s[i]));
       }
    }
    else {
       for(int i=0;i<n;i++){
         putchar(tolower(s[i]));
       }
    }
    return 0;
}