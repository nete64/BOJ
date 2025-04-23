P=int(input())
for i in range(P):
    K,N=map(int,input().split())
    print(f"{K} {N*(N+1)//2} {N*(2+(N-1)*2)//2} {N*(2+(N-1)*2//2)}")