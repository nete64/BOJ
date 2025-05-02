N=int(input())
K=int(input())
c=0
for i in range(1,N+1):
    m=i
    r=1
    for j in range(2, int(i**0.5)+2):
        while m%j==0:
            r=j
            m//=j
        if m>1:
            r=m
    if r<=K:
        c+=1
print(c)