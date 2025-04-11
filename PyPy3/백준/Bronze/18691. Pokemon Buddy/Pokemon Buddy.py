T=int(input())
for i in range(T):
    G,C,E=map(int,input().split())
    if C>=E:
        print(0)
        continue
    if G==1:print(E-C)
    elif G==2:print((E-C)*3)
    elif G==3:print((E-C)*5)