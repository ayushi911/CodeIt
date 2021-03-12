#include<iostream>
using namespace std;

long long dp[60];


void psum(int n){
    cout<<(n)*(n+1)/2<<endl;
}
void prod(int n){
    	dp[0]=1;
		for(int i=1;i<=60;i++)
			dp[i]=(dp[i-1]*i)%1000000007;
    cout<<dp[n]<<endl;
}

int main()
{
	int t;
    cin>>t;
    while(t>0){
        int n,c;
        cin>>n>>c;
        //cin>>c;
        if(c==1){
            psum(n);
        }
        else if(c==2){
            prod(n);
        }
        else
            cout<<-1<<endl;
    t--;
    }
    return 0;
}
