#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int i,j;
    int a[5][5];
    for(i=0;i<5;++i){
        for(j=0;j<5;++j)
        cin>>a[i][j];
    }
    int r,c;
    for(i=0;i<5;++i){
        for(j=0;j<5;++j){
            if(a[i][j]==1){
                r=i;c=j;
                break;
            }
            else
                continue;
        }
    }
    //cout<<r<<" "<<c<<endl;
    cout<<abs(r-2)+abs(c-2);
    return 0;
}