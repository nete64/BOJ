a=list(map(int,input().split()))
r=0
for k in a:
    if k==max(a):continue
    if max(a)-k<=1000:r+=1
print(r)