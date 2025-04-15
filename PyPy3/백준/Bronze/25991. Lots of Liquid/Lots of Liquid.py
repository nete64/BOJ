n=int(input())
a=list(map(float,input().split()))
s=0
for i in a:
    s+=i**3
print(s**(1/3))