N=int(input())
r=0
for i in range(N):
    a,b=map(int,input().split())
    r=max(r,a*b)
print(r)