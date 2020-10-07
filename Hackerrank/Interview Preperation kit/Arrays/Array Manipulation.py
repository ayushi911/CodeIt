#python 3 code for the Array Manipulation question
# Complete the arrayManipulation function below.
def arrayManipulation(n, q):
    #------------------------Runs for half the test cases! Didn,t Debug!!--------------
    # size=len(q)
    # l=[0]*n
    # if size==1:
    #     for i in range(1,n+1):
    #         if i==q[0][0]:
    #             while(i<=q[0][1]):
    #                 l[i-1]+=q[0][2]
    #                 i+=1
    #     return (max(l))
    # else:
    #     i=0
    #     maxi=-901029909909
    #     while(i<size):
    #         for j in range(1,n+1):
    #             if j==q[i][0]:
    #                 while(j<=q[i][1]):
    #                     l[j-1]+=q[i][2]
    #                     j+=1
    #         maxi=max(maxi,max(l))
    #         i+=1
    #     return (maxi)
    #----------------------------------RUNS FOR ALL!!-------------------------------
    array = [0] * (n + 1)
    for query in queries: 
        a = query[0] - 1
        b = query[1]
        k = query[2]
        array[a] += k
        array[b] -= k
        
    max_value = 0
    running_count = 0
    for i in array:
        running_count += i
        if running_count > max_value:
            max_value = running_count
            
    return max_value
