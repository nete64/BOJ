import math
w,h=map(int,input().split())
n,a,b=map(int,input().split())
if a<=w and b<=h:print(math.ceil(n/((w//a)*(h//b))))
else:print(-1)