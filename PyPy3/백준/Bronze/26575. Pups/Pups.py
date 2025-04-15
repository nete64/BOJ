n=int(input())
for i in range(n):
    a=list(map(str,input().split()))
    print(f"${float(a[0])*float(a[1])*float(a[2]):.2f}")