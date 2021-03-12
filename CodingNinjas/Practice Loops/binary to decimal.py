## Read input as specified in the question.
## Print output as specified in the question.
n=int(input())
# s=""
# while n>0:
#     s=s+str(n%2)
#     n=int(n/2)
# for i in range(0,len(s)):
#     print(s[len(s)-1-i])
r=str(n)
j=len(r)
s=0
for i in range(0,j):
    s = s + int(r[i])*pow(2,j-i-1)
print(s)
