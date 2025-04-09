T=int(input())
for i in range(T):
    n,s,d=map(int,input().split())
    r=0
    for j in range(n):
        a,b=map(int,input().split())
        if a/s<=d:
            r+=b
    print(f"Data Set {i+1}:\n{r}\n")