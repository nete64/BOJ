N=int(input())
A=sorted(map(int,input().split()))
m={}
for k in A:
    if k not in m:
        print(k)
        m[k]=1