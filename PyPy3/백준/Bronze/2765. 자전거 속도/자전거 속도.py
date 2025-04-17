c=1
while True:
    d,r,t=map(float,input().split())
    if r==0:break
    
    x=d*3.1415927*r*(1/5280/12)
    y=x*3600/t
    print(f"Trip #{c}: {x:.2f} {y:.2f}")
    c+=1