while True:
    N,D=map(int,input().split())
    if N==D==0:
        break
    
    a=[0]*N
    for i in range(D):
        v=list(map(int,input().split()))
        for j in range(N):
            if v[j]==1:
                a[j]+=1
    
    f=False
    for i in range(N):
        if a[i]==D:
            f=True
            break
    print("yes") if f==True else print("no")