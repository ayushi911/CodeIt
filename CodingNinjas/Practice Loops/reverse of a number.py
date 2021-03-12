
def reverse(n):
    s=str(n)
    res=""
    for i in range(0,len(s)):
        res = res + s[len(s)-i-1]
    j= int(res)
    return j	

n=int(input())
result = reverse(n)
print(result)
