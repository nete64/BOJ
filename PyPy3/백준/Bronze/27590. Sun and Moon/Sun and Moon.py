a,b=map(int,input().split())
c,d=map(int,input().split())
for i in range(5001):
    if (a+i)%b==(c+i)%d:
        print(i)
        break