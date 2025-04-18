T=int(input())
for i in range(T):
    A=list(filter(lambda x:x%2==0,map(int,input().split())))
    print(sum(A),min(A))