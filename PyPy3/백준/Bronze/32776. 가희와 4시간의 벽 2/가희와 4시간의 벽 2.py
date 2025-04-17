S=int(input())
a,b,c=map(int,input().split())
if S<=a+b+c or S<=240:
    print("high speed rail")
else:
    print("flight")