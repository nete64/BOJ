N=int(input())
s=input()
x=0;y=0
for c in s:
    if c=='N':y+=1
    elif c=='S':y-=1
    elif c=='W':x-=1
    elif c=='E':x+=1
print(abs(x)+abs(y))