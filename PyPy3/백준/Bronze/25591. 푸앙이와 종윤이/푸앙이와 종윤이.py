x,y=map(int,input().split())
a=100-x
b=100-y
c=100-(a+b)
d=a*b
q=d//100
r=d%100
if d>=100:
    d=q*100+r
print(a,b,c,d,q,r)
print(x*y//100,x*y%100)