while True:
    n=int(input())
    if n==-1:break
    
    p=0
    r=0
    for i in range(n):
        s,t=map(int,input().split())
        r+=s*(t-p)
        p=t
    print(f"{r} miles")