//1646. Get Maximum in Generated Array
//Ques Link: https://leetcode.com/problems/get-maximum-in-generated-array/
//------------------------------------------SOLUTION----------------------------------------

class Solution {
public:
    int getMaximumGenerated(int n) {
        int a[n+1];
        if(n==0)return 0;
        else if(n==1)return 1;
        a[0]=0;
        a[1]=1;
        for(int i=2;i<=n;++i){
            if(i%2==0)
                a[i]=a[i/2];
            else
                a[i]=a[int(i/2)]+a[int(i/2)+1];
        }
        sort(a,a+n+1);
        return a[n];
    }
};
