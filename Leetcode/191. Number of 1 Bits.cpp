// 191. Number of 1 Bits
// ques link: https://leetcode.com/problems/number-of-1-bits/
//--------------------------------SOLUTION---------------------------------
class Solution {
public:
    string dtb(uint32_t n){
        vector <int> v(32);
        int count=0;
        while(n>0){
            v.push_back(n%2);
            n/=2;
            count++;
        }
        //fill(v.begin() + count-1, v.end() , 0);
        reverse(v.begin(),v.end());
        string s="" , t="",u="";
        for(int i=0;i<32;++i){
            s+=to_string(v[i]);
        }
        for(int i=0;i<count;++i){    //
            t+=s[i];                 //   
        }                            //   
        for(int i=0;i<32-count;++i){ //
            u+=to_string(0);         //
        }                            //
        //cout<<count<<endl;
       return u+t;                   // can be just replaced by return s;   
    }
    /*
    This above will even work if instead of returning u+t we return only s, and this this will save the two extra for loops.
    */
    int hammingWeight(uint32_t n) {
       //cout<<n<<endl; 
        string s;
        s=dtb(n);
        int count=0;
        for(int i=0;i<32;++i){
            if(s[i]=='1')
                count++;
            else 
                continue;
        }
        //cout<<s<<endl;
        return count;
    }
};
