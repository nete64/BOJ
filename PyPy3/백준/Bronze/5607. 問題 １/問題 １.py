n=int(input())
x=y=0
for i in range(n):
    A,B=map(int,input().split())
    if A>B:
        x+=A+B
    elif A<B:
        y+=A+B
    else:
        x+=A
        y+=B
print(x,y)