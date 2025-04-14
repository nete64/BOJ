import math
n=int(input())
for i in range(n):
    a,b=map(int,input().split())
    c,d=map(int,input().split())
    if a//b > math.pi*c*c//d:print("Slice of pizza")
    else:print("Whole pizza")