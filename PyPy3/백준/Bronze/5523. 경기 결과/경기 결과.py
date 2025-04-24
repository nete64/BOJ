N=int(input())
x=0;y=0
for i in range(N):
    A,B=map(int,input().split())
    if A>B:x+=1
    elif A<B:y+=1
print(x,y)