T=int(input())
s=[0]*5
a=list(map(int,input().split()))
for i in range(len(a)):
    s[i]=a[i]

x=0;y=0;z=0
if s[0]>s[2]:x=(s[0]-s[2])*508
else:x=(s[2]-s[0])*108
if s[1]>s[3]:y=(s[1]-s[3])*212
else:y=(s[3]-s[1])*305
z=s[4]*707
print((x+y+z)*4763)