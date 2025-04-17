T,X=map(int,input().split())
N=int(input())
for i in range(N):
    K=int(input())
    A=list(map(int,input().split()))
    if X not in A:
        print("NO")
        exit()
print("YES")