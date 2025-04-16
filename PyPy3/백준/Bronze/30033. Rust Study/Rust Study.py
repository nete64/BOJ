N=int(input())
A=list(map(int,input().split()))
B=list(map(int,input().split()))
s=0
for i in range(N):
    if A[i]<=B[i]:s+=1
print(s)