N=int(input())
a=map(int,input().split())
r=0
for i in a:
    if i%2==0: r+=1
    else: r-=1
if r>0:print("Happy")
else:print("Sad")