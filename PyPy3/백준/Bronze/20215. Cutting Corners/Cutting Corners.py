import math
w,h=map(int,input().split())
print(w+h-abs(math.sqrt(w*w+h*h)))