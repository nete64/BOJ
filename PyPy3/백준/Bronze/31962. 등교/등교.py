N,X=map(int,input().split())
a=-1
for i in range(N):
    S,T=map(int,input().split())
    if S+T<=X:a=max(a,S)
print(a)