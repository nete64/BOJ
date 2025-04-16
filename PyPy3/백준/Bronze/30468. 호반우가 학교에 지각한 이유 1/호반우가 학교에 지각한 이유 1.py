a,b,c,d,N=map(int,input().split())
r=0
while True:
    v=(a+b+c+d+r)//4
    if v>=N:
        print(r)
        break
    r+=1