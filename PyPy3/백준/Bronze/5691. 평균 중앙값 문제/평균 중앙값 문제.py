v=[]
while True:
    A,B=map(int,input().split())
    if A==B==0:
        break
    print(min(2*A-B,2*B-A,(A+B)//2))