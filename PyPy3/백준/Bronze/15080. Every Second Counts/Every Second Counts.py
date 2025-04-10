a=list(map(int,input().split(" :")))
b=list(map(int,input().split(" :")))
c=a[0]*3600+a[1]*60+a[2]
d=b[0]*3600+b[1]*60+b[2]
r=0
if c>d:
    r=86400-(c-d)
else:
    r=d-c
print(r)