n,m=map(int,input().split())
r=0
for i in range(n):
    s=list(map(str,input().split()))
    if s.count('A')==1:
        r+=1
if r==n:print("Yes")
else:print("No")