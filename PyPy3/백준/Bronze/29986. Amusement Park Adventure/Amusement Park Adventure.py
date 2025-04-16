N,H=map(int,input().split())
a=list(map(int,input().split()))
s=0
for k in a:
    if k<=H:
        s+=1
print(s)