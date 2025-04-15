n=int(input())
for i in range(n):
    a=list(map(int,input().split()))
    print("Data set: ",end='')
    for i in a:
        print(f"{i} ",end='')
    print()
    for i in range(a[2]):
        t=max(a[0],a[1])
        a[0]=min(a[0],a[1])
        a[1]=t//2
    print(f"{max(a[0],a[1])} {min(a[0],a[1])}\n")