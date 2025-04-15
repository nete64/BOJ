n=int(input())
for i in range(n):
    a=list(map(int,input().split()))
    print("Denominations: ",end='')
    for j in range(1,len(a)):print(f"{a[j]} ",end='')
    print()
    f=False
    for j in range(1,len(a)-1):
        if a[j]*2>a[j+1]:
            print("Bad coin denominations!")
            f=True
            break
    if not f:
        print("Good coin denominations!")
    print()