N=int(input())
A=list(map(str,input().split()))
S=input()
r=0
for k in A:
    if k==S:r+=1
print(r)