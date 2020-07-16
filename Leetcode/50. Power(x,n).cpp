/*
50. Power(x,n)

Implement pow(x, n), which calculates x raised to the power n (xn).

Example 1:
Input: 2.00000, 10
Output: 1024.00000

Example 2:
Input: 2.10000, 3
Output: 9.26100

Example 3:
Input: 2.00000, -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25

Note:

1. -100.0 < x < 100.0
2. n is a 32-bit signed integer, within the range [−231, 231 − 1]
------------------------------------SOLUTION--------------------------------*/
class Solution {
public:
    double myPow(double x, int n) {
    int min= INT_MIN;
    int max= -1*INT_MAX;
        if(n == 0)
       	return 1;
    if(n<0 && n>= min && n>=max)
    {
        n = -1*n;
       	x = 1.0/x;
    }
    if(n%2 == 0)
    {
    	return myPow(x*x, n/2);
    }
    else
    {
    	return  x*myPow(x*x, n/2);
    }
    }
};
