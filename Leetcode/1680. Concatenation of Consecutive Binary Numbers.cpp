//1680. Concatenation of Consecutive Binary Numbers
// ques link: https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/
//-------------------------------------------------SOLUTION-------------------------------------------------
class Solution {
public:
    // string dtb(string s,int n){
    //     if(n==1)
    //         return s+to_string(1);
    //     else{
    //         while(n>0){
    //             int j=n%2;
    //             s+=to_string(j);
    //             n/=2;
    //         }
    //     }
    //     return dtb(s,n-1);
    // }
    int concatenatedBinary(int n) {
        // string st=dtb("",n);
        // reverse(st.begin(),st.end());
        // long int m=1e9 +7;
        // int le=st.length()-1;
        // long int x=0;
        // for(int i=st.length()-1;i>=0;--i){
        //     x+=int(st[i])*pow(2,le-i);
        // }
        // cout<<x<<" "<<st<<endl;
        // return x%m;
        
        long res = 0;
        for (int i = 1, j, bitLen; i <= n; i++) {
            j = i;
            bitLen = 0;
            // computing the length in bits of i
            while (j) {
                bitLen++;
                j >>= 1;
            }
            // shifting res by bitLen bits
            res = (res << bitLen) % 1000000007 + i;
        }
        return res;
    }
};
