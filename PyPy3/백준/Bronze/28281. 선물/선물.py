N,X=map(int,input().split())
a=list(map(int,input().split()))
r=10**13
for i in range(N-1):
    r=min(r,a[i]*X+a[i+1]*X)
print(r)