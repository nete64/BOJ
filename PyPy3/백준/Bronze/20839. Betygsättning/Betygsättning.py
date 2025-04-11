x,y,z=map(int,input().split())
p,q,r=map(int,input().split())
if z<=r:
    if y<=q:
        if x<=p:print("A")
        elif x*0.5<=p:print("B")
        else:print("C")
    elif y*0.5<=q:print("D")
    else:print("E")