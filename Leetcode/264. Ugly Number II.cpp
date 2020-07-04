/*
264. Ugly Number II

Write a program to find the n-th ugly number.

Ugly numbers are positive numbers whose prime factors only include 2, 3, 5. 

Example:

Input: n = 10
Output: 12
Explanation: 1, 2, 3, 4, 5, 6, 8, 9, 10, 12 is the sequence of the first 10 ugly numbers.

Note:  

1. 1 is typically treated as an ugly number.
2. n does not exceed 1690.

--------------------------------------SOLUTION----------------------------------*/
class Solution {
public:
    int nthUglyNumber(int n) {
        if(n==1)return 1;
        int ugly[n];
        ugly[0]=1;
        int v2=0,v3=0,v5=0,count=1;
        while(count<n){
            int val2=ugly[v2]*2;
            int val3=ugly[v3]*3;
            int val5=ugly[v5]*5;
            int val=min({val2,val3,val5});
            if(val==val2)v2++;
            if(val==val3)v3++;
            if(val==val5)v5++;
            ugly[count++]=val;
        }
        return ugly[n-1];
    }
};
