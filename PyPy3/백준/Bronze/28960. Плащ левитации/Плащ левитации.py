h,l,a,b=map(int,input().split())
if h >= a/2 and l >= b:print("YES")
elif h >= b/2 and l >= a:print("YES")
else:print("NO")