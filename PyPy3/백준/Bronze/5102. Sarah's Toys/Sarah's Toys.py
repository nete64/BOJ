while True:
    a,b=map(int,input().split())
    if a==b==0:break
    
    r=a-b
    if r%2==0:
        print(f"{r//2} 0")
    else:
        if r<=2:
            print(f"{r//2} 0")
        else:
            r-=3
            print(f"{r//2} 1")