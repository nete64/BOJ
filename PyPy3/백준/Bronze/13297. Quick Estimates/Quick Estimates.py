N=int(input())
for i in range(N):
    k=int(input())
    c=0
    while k>0:
        k//=10
        c+=1
    if c==0: c=1
    print(c)