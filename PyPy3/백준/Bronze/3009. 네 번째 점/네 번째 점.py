a,b=map(int,input().split())
c,d=map(int,input().split())
e,f=map(int,input().split())
X=Y=0
if a==c:print(f"{e} ",end='')
elif a==e:print(f"{c} ",end='')
elif c==e:print(f"{a} ",end='')

if b==d:print(f"{f} ",end='')
elif b==f:print(f"{d} ",end='')
elif d==f:print(f"{b} ",end='')