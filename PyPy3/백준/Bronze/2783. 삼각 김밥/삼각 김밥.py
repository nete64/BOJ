A,B=map(float,input().split())
m=A*1000/B
N=int(input())
for i in range(N):
    X,Y=map(float,input().split())
    m=min(m,X*1000/Y)
print(f"{m:.2f}")