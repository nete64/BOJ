import math
n=int(input())
A=list(map(int,input().split()))
s=0
for k in A:
    s+=math.ceil(k/2)
print(s)