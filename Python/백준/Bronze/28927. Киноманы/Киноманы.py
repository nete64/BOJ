a,b,c=map(int,input().split())
x,y,z=map(int,input().split())
k=(3*a+20*b+120*c)-(3*x+20*y+120*z)
if k>0:print("Max")
elif k<0:print("Mel")
else:print("Draw")