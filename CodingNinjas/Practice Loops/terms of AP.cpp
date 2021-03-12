#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int i=1;
    while(x--){
        if((3*i + 2)%4!=0)
            cout<<(3*i + 2)<<" ";
        else
            i--;
        i++;
    }
    return 0;
}
