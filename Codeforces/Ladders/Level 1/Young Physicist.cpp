//Problem Link: http://codeforces.com/problemset/problem/69/A
#include <iostream>
using namespace std;

void force(){
  int n;
  cin>>n;
  int m[n][3];
  for(int i=0;i<n;++i){
    for(int j=0;j<3;++j){
      cin>>m[i][j];
    }
  }
  int res[3];
  int k=0;
  for(int i=0;i<3;++i){
    int sum=0;
    for(int j=0;j<n;++j){
      sum+=m[j][i];
    }
    res[i]=sum;
    //cout<<res[i]<<" ";
  }
  int f=0;
  for(int i=0;i<3;++i){
    if(res[i]!=0){
      cout<<"NO\n";
      f=1;
      break;
    }
  }
  if(f==0)
    cout<<"YES\n";
    
}

int main() {
  force();
  return 0;
}

