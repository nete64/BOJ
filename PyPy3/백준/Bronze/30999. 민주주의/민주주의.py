N,M=map(int,input().split())
r=0
for i in range(N):
    s=input()
    o=s.count('O')
    x=s.count('X')
    if o>x:r+=1
print(r)