d={}
N,M=map(int,input().split())
v=list(map(int,input().split()))
f=list(map(int,input().split()))
r=0
for i in range(M):
    d[f[i]]=1
for i in range(M):
    if v[i] not in d:
        r+=1
print(r)