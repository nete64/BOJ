N=int(input())
A=[]
for i in range(N):
    A.append(int(input()))
M=int(input())
s=0
for i in range(M):
    k=int(input())
    s+=A[k-1]
print(s)