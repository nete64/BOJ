A=int(input())
B=int(input())
C=int(input())
v=[A,B,C]
v.sort()
if v[0]+v[1]==v[2]:print(1)
else:print(0)