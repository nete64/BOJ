while True:
    n=int(input())
    if n==0:break
    
    r=0
    for i in range(1,n+1):
        r+=i**2
    print(r)