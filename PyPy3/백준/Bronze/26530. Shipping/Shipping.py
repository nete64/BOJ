n=int(input())
for i in range(n):
    x=int(input())
    s=0
    for j in range(x):
        a=list(map(str,input().split()))
        s+=int(a[1])*float(a[2])
    print(f"${s:.2f}")