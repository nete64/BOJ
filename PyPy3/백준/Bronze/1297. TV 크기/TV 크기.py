import math
D,H,W=map(int,input().split())
x=math.sqrt(D*D/(H*H+W*W))
print(math.floor(x*H),math.floor(x*W))