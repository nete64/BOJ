n=int(input())
for i in range(n):
    a=list(map(str,input().split()))
    s=a[0]
    x=int(a[1])
    y=int(a[2])
    print(s[:x]+s[y:])