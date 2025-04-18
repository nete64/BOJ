import sys
input=sys.stdin.readline

n=int(input())
a=list(map(int,input().split()))
m=int(input())
for i in range(m):
    k,l,r=map(int,input().split())
    
    if k==1:
        for i in range(l,r+1):
            a[i-1]=a[i-1]**2%2010
    else:
        s=0
        for i in range(l,r+1):
            s+=a[i-1]
        print(s)