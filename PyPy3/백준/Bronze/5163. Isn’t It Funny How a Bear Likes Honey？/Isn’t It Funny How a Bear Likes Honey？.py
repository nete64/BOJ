import math
K=int(input())
for i in range(K):
    b,w=map(float,input().split())
    s=0.
    print(f"Data Set {i+1}:")
    for j in range(int(b)):
        s+=4/3*math.pi*(float(input())**3)/1000
    if s>=w:print("Yes\n")
    else:print("No\n")