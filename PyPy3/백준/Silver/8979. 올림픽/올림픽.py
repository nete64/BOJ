v=[]
N,K=map(int,input().split())
for i in range(N):
    a,b,c,d=list(map(int,input().split()))
    v.append((a,b,c,d))
v.sort(key=lambda x: (-x[1],-x[2],-x[3]))

r=1
x,y,z=v[0][1],v[0][2],v[0][3]
for i in range(N):
    if K==v[i][0]:
        print(r)
        break
    if not (x==v[i][1] and y==v[i][2] and z==v[i][3]):
        r+=1