a,b=map(int,input().split())
u=v=w=0
for i in range(a):
    x,y=map(str,input().split())
     
    u+=int(x)
    if y=="balcony":
        v+=int(x)
    elif y=="bedroom":
        w+=int(x)
print(f"{u}\n{w}\n{b*(u-v+0.5*v)}")