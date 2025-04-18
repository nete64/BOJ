while True:
    a,b,c,d=map(int,input().split())
    r=0
    
    if a==0 and b==0 and c==0 and d==0:break
    
    if a==b==c==d:
        print(0)
        continue
    
    while True:
        w=a;x=b;y=c;z=d
        a=abs(w-x)
        b=abs(x-y)
        c=abs(y-z)
        d=abs(z-w)

        r+=1
        
        if a==b and b==c and c==d and d==a:
            break
        
    print(r)