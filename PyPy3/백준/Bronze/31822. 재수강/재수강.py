s=input()
N=int(input())
r=0
for i in range(N):
    t=input()
    if s[:5]==t[:5]:
        r+=1
print(r)