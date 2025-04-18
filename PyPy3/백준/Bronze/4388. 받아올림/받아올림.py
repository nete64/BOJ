while True:
    a,b=map(int,input().split())
    if a==b==0:
        break
    
    x=c=0
    
    if a<b:
        a,b=b,a
        
    while a>0:
        c=(a%10+b%10+c)//10
        x+=c
        a//=10
        b//=10
        
    print(x)