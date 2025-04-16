n,k=map(int,input().split())
x=0
y=0
for i in range(n):
    s=input()
    if s=="ammo":x+=k
    elif s=="shoot":x-=1
    elif s=="save":y=x
    elif s=="load":x=y
    print(x)