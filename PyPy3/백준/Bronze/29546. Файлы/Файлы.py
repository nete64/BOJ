n=int(input())
a=[]
for i in range(n):
    a.append(input())
m=int(input())
for i in range(m):
    l,r=map(int,input().split())
    for k in range(l-1,r):
        print(a[k])