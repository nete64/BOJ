n=int(input())
s=10**13
for i in range(n):
    a,b=map(int,input().split())
    s=min(s,a+b)
print(s)