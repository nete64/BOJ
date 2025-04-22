T=int(input())
r=0
for i in range(T):
    s=input()
    if "CD" not in s:
        r+=1
print(r)