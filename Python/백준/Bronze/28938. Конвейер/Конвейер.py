N=int(input())
a=map(int,input().split())
r=0
for i in a:
    r+=i
if r>0:print("Right")
elif r<0:print("Left")
else:print("Stay")