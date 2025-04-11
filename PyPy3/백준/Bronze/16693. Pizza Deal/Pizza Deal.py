import math
a,b=map(int,input().split())
c,d=map(int,input().split())
e=a/b
f=math.pi*c*c/d
if e>f:print("Slice of pizza")
else:print("Whole pizza")