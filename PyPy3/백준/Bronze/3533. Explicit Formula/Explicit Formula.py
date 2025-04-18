A=list(map(int,input().split()))
x=0
l=len(A)
for i in range(0,l):
    for j in range(i+1,l):
        x=x^(A[i]|A[j])

for i in range(0,l):
    for j in range(i+1,l):
        for k in range(j+1,l):
            x=x^(A[i]|A[j]|A[k])
print(x)