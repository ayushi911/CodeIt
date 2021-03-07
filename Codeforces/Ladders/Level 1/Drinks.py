a = int(input());
t=0
vol =[]
vol=list(map(int, input().split()))
for i in range(0,a):
  vol[i]=0.01*vol[i]
  t=t+vol[i]
print((t/a)*100)
