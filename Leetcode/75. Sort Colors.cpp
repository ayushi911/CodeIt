/*
75. Sort Colors

Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note: You are not suppose to use the library's sort function for this problem.

Example:

Input: [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
-----------------------SOLUTION------------------------*/
class Solution {
public:
    void sortColors(vector<int>& n) {
     int size=n.size();
        int z=0,o=0,t=0;
       for(int i=0; i<size;i++){
           if(n[i]==0)z++;
           else if(n[i]==1)o++;
           else t++;
       }
        int i=0;
        while(i<size){
        while(z!=0){
         n[i]=0;
        z--;i++;
        }
            while(o!=0){
         n[i]=1;
        o--;i++;
        }
            while(t!=0){
         n[i]=2;
        t--;i++;
        }
        }
    }
};
