#include<iostream>
#include<string.h>

using namespace std;

int main(){
    string s;
    string res="";
    cin>>s;
    int n = s.length();
    int i=0;
    while(i<n){
        if(s[i]=='-'){
            if(s[i+1]=='-'){
                res+= to_string(2);
                i++;
            }
            else if(s[i+1]=='.'){
                res+= to_string(1);
                i++;
            }      
        }
        else if(s[i]=='.')
            res+= to_string(0);
        i++;
    }
    cout<<res;
    return 0;
}