T=int(input())
for i in range(T):
    N=int(input())
    r=1
    for j in range(N):
        r*=j+1
    print(r%10)