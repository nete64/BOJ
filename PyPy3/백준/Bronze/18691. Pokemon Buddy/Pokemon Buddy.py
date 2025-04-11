T=int(input())
for i in range(T):
    G,C,E=map(int,input().split())
    if C>=E:print(0)
    else:print((E-C)*(2*G-1))