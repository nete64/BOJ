v=[1,2,6,24,120]
while True:
    n=int(input())
    if n==0:break
    
    d=0
    r=0
    while n>0:
        r+=(n%10)*v[d]
        n//=10
        d+=1
    print(r)