while True:
    N=int(input())
    if N==0:break
    
    A=list(map(int,input().split()))
    x=A.count(0)
    y=A.count(1)
    print(f"Mary won {x} times and John won {y} times")