T=int(input())
for i in range(T):
    A=[0]*8
    b=list(map(int,input().split()))
    for j in range(2,len(b),2):
        A[b[j]-1]+=1
    print(max(A))