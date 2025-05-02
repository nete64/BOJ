N=int(input())
K=int(input())
c=0
for i in range(1,N+1):
    r=m=i
    for j in range(2, K+1):
        while m%j==0:
            m//=j
            r=j  
    if m>1:
        c+=1
print(N-c)