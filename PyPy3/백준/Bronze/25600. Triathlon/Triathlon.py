N=int(input())
r=0
for i in range(N):
    a,d,g=map(int,input().split())
    if a==d+g:r=max(r,2*a*(d+g))
    else:r=max(r,a*(d+g))
print(r)