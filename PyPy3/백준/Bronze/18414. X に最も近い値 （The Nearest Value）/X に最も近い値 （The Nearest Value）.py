X,L,R=map(int,input().split())
k=123456
r=0
for i in range(L,R+1):
    if k>abs(i-X):
        k=abs(i-X)
        r=i
print(r)