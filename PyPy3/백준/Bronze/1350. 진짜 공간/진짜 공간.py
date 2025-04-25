import math
N=int(input())
f=list(map(int,input().split()))
c=int(input())
s=0
for i in range(N):
    s+=math.ceil(f[i]/c)*c
print(s)