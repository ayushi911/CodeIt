x=input()
y=input()
res=""
if(len(x)==len(y)):
  for i in range(0,len(x)):
    res=res+ str(int(x[i])^int(y[i]))
print(res)
