a=sorted(map(int,input().split()))
if a[0]==a[1]==a[2]:print(2)
elif a[0]*a[0]+a[1]*a[1]==a[2]*a[2]:print(1)
else:print(0)