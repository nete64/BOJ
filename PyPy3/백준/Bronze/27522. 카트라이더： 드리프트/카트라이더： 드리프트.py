v=[]
d={'R':0,'B':0}
r=[10,8,6,5,4,3,2,1]
for i in range(8):
    a,t=map(str,input().split())
    h,m,s=map(int,a.split(":"))
    v.append([h*1000000+m*1000+s, t])
v.sort(key=lambda v: v[0])

for i in range(8):
    d[v[i][1]]+=r[i]
if d['R']>d['B']:
    print("Red")
else:
    print("Blue")