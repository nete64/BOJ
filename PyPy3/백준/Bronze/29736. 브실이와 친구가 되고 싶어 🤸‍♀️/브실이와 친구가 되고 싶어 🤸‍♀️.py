A,B=map(int,input().split())
K,X=map(int,input().split())
r=0
for i in range(A,B+1):
    if abs(K-i)<=X:r+=1
if r==0:print("IMPOSSIBLE")
else:print(r)