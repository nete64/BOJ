T=int(input())
for i in range(T):
    N,A,D=map(int,input().split())
    print(N*(2*A+(N-1)*D)//2)