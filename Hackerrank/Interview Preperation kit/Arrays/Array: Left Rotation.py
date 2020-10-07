#python3 solution
# Complete the rotLeft function below.
def rotLeft(a, d):
    if(len(a)==d):
        return(a)
    elif(len(a)>d):
        m=a[:d]
        n=a[d:]
        s=n+m
        return(s)
    else:
        j= d % len(a)
        m=a[:j]
        n=a[j:]
        s=n+m
        return(s)
