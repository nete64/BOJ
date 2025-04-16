N,M,K=map(int,input().split())
a=0
b=N
r=0
while True:
    if a>=b:break
    a+=K
    b+=M
    r+=1
print(r)