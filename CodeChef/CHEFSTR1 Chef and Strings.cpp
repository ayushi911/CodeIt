/*
Having already mastered cooking, Chef has now decided to learn how to play the guitar. Often while trying to play a song, Chef has to skip several strings to 
reach the string he has to pluck. Eg. he may have to pluck the 1st string and then the 6th string. This is easy in guitars with only 6 strings; However, Chef 
is playing a guitar with 10^6 strings. In order to simplify his task, Chef wants you to write a program that will tell him the total number of strings he has to 
skip while playing his favourite song.

This is how guitar strings are numbered (In ascending order from right to left). Eg. to switch from string 1 to 6, Chef would have to skip 4 strings (2,3,4,5).

Input:
1. First line will contain T, number of testcases. Then the testcases follow.
2. The first line of each test case contains N, the number of times Chef has to pluck a string
3. The second line of each test case contains N space separated integers - S1, S2, …, SN, where Si is the number of the ith string Chef has to pluck.

Output:
1. For each testcase, output the total number of strings Chef has to skip over while playing his favourite song.

Constraints
1. 1≤T≤10
2. 2≤N≤105
3. 1≤Si≤106
For each valid i, Si≠Si+1

Subtasks
1. 30 points : for each valid i, Si<Si+1
2. 70 points : No additional constraints

Sample Input:
2
6
1 6 11 6 10 11
4
1 3 5 7

Sample Output:
15
3

Explanation:
Test Case 1

Chef skips 4 strings (2,3,4,5) to move from 1 to 6
Chef skips 4 strings (7,8,9,10) to move from 6 to 11
Chef skips 4 strings (10,9,8,7) to move from 11 to 6
Chef skips 3 strings (7,8,9) to move from 6 to 10
Chef skips 0 strings to move from 10 to 11
Therefore, the answer is 4+4+4+3+0=15

Test Case 2

Chef skips 1 string to move from 1 to 3
Chef skips 1 string to move from 3 to 5
Chef skips 1 string to move from 5 to 7
Therefore, the answer is 1+1+1=3
----------------------------------------SOLUTION--------------------------------------*/
#include <iostream>
using namespace std;

int main() {
	int p;
	cin>>p;
	for(int i=0;i<p;i++)
	{
		int n;
		int a[1000000];
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		long long int sum=0;
		for(int i=1;i<n;i++)
		{
	    if(a[i]>a[i-1])sum+=((a[i]-a[i-1])-1);
      else if(a[i]<a[i-1])sum+=((a[i-1]-a[i])-1);
      else sum+=0;
		}
		cout<<sum<<"\n";
		
	}
}

