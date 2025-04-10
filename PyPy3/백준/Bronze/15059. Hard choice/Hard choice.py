a=list(map(int,input().split()))
b=list(map(int,input().split()))
r=0
for i in range(3):
    if b[i]>a[i]: r += b[i]-a[i]
print(r)