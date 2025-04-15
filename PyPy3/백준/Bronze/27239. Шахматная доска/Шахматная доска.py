N=int(input())
a=['a','b','c','d','e','f','g','h']
print(f"{a[(N-1)%8]}{(N+7)//8}")