a,b,c=map(int,input().split())
d,e,f=map(int,input().split())
x=a+2*b+3*c
y=d+2*e+3*f
if x>y:print(1)
elif x<y:print(2)
else:print(0)