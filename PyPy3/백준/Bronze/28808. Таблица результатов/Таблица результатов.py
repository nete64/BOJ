a,b=map(int,input().split())
r=0
for i in range(a):
    s=input()
    if '+' in s:
        r+=1
print(r)