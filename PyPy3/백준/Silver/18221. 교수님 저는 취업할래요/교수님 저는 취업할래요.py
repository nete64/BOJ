N=int(input())
v=[]
for i in range(N):
    v.append(list(map(int,input().split())))
    
x1,y1,x2,y2=0,0,0,0
for i in range(N):
    for j in range(N):
        if v[i][j]==2:
            a,b=i,j
        elif v[i][j]==5:
            c,d=i,j
            
x1,y1,x2,y2=min(a,c),min(b,d),max(a,c),max(b,d)
k=0
for i in range(x1,x2+1):
    for j in range(y1,y2+1):
        if v[i][j]!=1:
            continue
        k+=1

if k>=3 and (x1-x2)**2+(y1-y2)**2>=25:
    print(1)
else:
    print(0)