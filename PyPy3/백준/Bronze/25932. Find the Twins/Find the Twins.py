n=int(input())
for i in range(n):
    a=list(map(int,input().split()))
    for j in a:print(f"{j} ",end='')
    print("")
    if 17 in a and 18 in a:print("both")
    elif 17 in a:print("zack")
    elif 18 in a:print("mack")
    else:print("none")
    print()