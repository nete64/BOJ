T=int(input())
for i in range(T):
    n=int(input())
    for j in range(n//5):
        print("++++ ",end='')
    for j in range(n%5):
        print("|",end='')
    print()