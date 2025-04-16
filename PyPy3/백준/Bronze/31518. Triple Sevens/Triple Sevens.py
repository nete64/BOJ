N=int(input())
r=0
for i in range(3):
    A=list(map(int,input().split()))
    if 7 in A:r+=1
if r==3:print("777")
else:print(0)