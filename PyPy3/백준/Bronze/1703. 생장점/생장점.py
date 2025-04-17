while True:
    a=list(map(int,input().split()))
    if a[0]==0:break
    
    s=1
    for i in range(1,2*a[0]+1,2):
        s*=a[i]
        s-=a[i+1]
    print(s)