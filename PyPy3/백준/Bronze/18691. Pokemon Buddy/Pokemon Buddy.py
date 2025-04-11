T=int(input())
for i in range(T):
    G,C,E=map(int,input().split())
    print(max(0,E-C)*(2*G-1))