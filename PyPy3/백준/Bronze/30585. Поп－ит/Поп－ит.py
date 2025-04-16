a,b=map(int,input().split())
x=0;y=0
for i in range(a):
    s=input()
    x+=s.count('0')
    y+=s.count('1')
print(min(x,y))