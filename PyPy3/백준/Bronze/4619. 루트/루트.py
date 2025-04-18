import math

while True:
    B,N=map(int,input().split())
    if B==N==0:
        break
    
    x = int(B**(1/N))
    y = math.ceil(B**(1/N))
    if abs(x**N-B)<abs(y**N-B):print(x)
    else:print(y)