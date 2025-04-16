n,A=map(int,input().split())
k=map(int,input().split())
s=0
for j in k:
    s+=j//A
print(s)