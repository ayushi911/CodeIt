/*
67. Add Binary
Given two binary strings, return their sum (also a binary string).

The input strings are both non-empty and contains only characters 1 or 0.

Example 1:
Input: a = "11", b = "1"
Output: "100"

Example 2:
Input: a = "1010", b = "1011"
Output: "10101"
 

Constraints:

Each string consists only of '0' or '1' characters.
1 <= a.length, b.length <= 10^4
Each string is either "0" or doesn't contain any leading zero
------------------------------SOLUTION----------------------------------*/
class Solution {
public:
    string addBinary(string a, string b) {
       int aLen = a.size() - 1, bLen = b.size() - 1, k = 0;
        string res = "";
        bool carry = 0;
        while(k <= aLen || k <= bLen) {
            int val = (k <= aLen && a[aLen-k] == '1') + (k <= bLen && b[bLen-k] == '1') + carry;
            res = to_string(val%2) + res;
            carry = val >= 2;
            k++;
        }
        return (carry ? to_string(carry) : "") + res;  
    }
};
