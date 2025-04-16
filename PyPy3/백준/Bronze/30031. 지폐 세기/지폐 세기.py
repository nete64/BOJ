m={136:1000,142:5000,148:10000,154:50000}
s=0
N=int(input())
for i in range(N):
    w,h=map(int,input().split())
    s+=m[w]
print(s)