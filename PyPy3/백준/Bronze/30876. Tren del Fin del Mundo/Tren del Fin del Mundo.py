N=int(input())
a,b=1234,1234
for i in range(N):
    x,y=map(int,input().split())
    if b>y:a=x;b=y
print(a,b)