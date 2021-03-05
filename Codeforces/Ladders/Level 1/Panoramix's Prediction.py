arr = [2,3,5,7,11,13,17,19,23,29,31,37,41,43,47]
a,b=[int(x) for x in input().split()]
count=0
for i in range(0,len(arr)):
  if arr[i]==a:
    if arr[i+1]==b:
      print("YES")
      count=1
      break
if count==0 and b<50:
  print("NO")
if b==50:
  exit
