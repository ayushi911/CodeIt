# Complete the minimumBribes function below.
def minimumBribes(q):
    if((len(q)==0) or (len(q)==1)):
        print(0)
    #ALTERNATIVE APPROACH! HAS SOME ISSUE THAT I DIDN'T FIX YET! XP
    # idx=[]
    # flag=0
    # for i in range(len(q)):
    #     idx.append(abs(q[i]-(i+1)))
    # count=0
    # for i in range(len(idx)):
    #     if(idx[i]<=2):
    #         count+=idx[i]
    #     elif(idx[i]>=3):
    #         flag=1
    #         break
    # if(flag==1):
    #     print("Too chaotic")
    # else:
    #     print(int(count/2))
    moves=0
    q=[p-1 for p in q]
    for i,p in enumerate(q):
        if(p-i>2):
            print("Too chaotic")
            return
        for j in range(max(p-1,0),i):
            if q[j]>p:
                moves+=1
    print(moves)
