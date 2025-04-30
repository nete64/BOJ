N=int(input())
m={}
for i in range(N):
    x,y,d=map(str,input().split())
    x=int(x)
    y=int(y)
    
    if d not in m:
        if d=='R':
            m[d]=[x+1,y]
        elif d=='L':
            m[d]=[x-1,y]
        elif d=='U':
            m[d]=[x,y+1]
        elif d=='D':
            m[d]=[x,y-1]
    else:
        if d=='R' and m[d][0]<x+1:
            m[d][0]=x+1
            m[d][1]=y
        elif d=='L' and m[d][0]>x-1:
            m[d][0]=x-1
            m[d][1]=y
        elif d=='D' and m[d][1]>y-1:
            m[d][0]=x
            m[d][1]=y-1
        elif d=='U' and m[d][1]<y+1:
            m[d][0]=x
            m[d][1]=y+1
if len(m)==4:
    print((m['L'][0]-m['R'][0]+1)*(m['D'][1]-m['U'][1]+1))
else:
    print("Infinity")