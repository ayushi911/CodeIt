#python 3 solution for the minimum cost of swapping first N natural nos. into ascending order list
# Complete the minimumSwaps function below.
def minimumSwaps(arr):
    n = len(arr)
    count,i=0,0
    while(i<n):
        if arr[i]!=i+1:
            temp=0
            while arr[i]!=i+1:
                temp=arr[arr[i]-1]
                arr[arr[i]-1]=arr[i]
                arr[i]=temp
                count+=1
        i+=1
    return (count)
