n=int(input())
for i in range(n):
    a,b=map(float,input().split())
    print(f"{abs(a-b):.1f}")