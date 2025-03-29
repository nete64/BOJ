import math
p,q,s=map(int,input().split())
if math.lcm(p,q)<=s:
    print("yes")
else:
    print("no")