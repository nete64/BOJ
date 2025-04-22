while True:
    t,a=map(str,input().split())
    if t=="00:00" and a=="00:00":
        break
    
    h1,m1=map(int,t.split(':'))
    h2,m2=map(int,a.split(':'))
    t1=h1*60+m1
    t2=h2*60+m2
    t3=t1+t2
    print(f"{(t3//60)%24:02}:{t3%60:02} ",end='')
    
    if t3//1440:
        print(f"+{t3//1440}",end='')
    print()