a=[]
b=[]
for i in range(4):
    N=int(input())
    a.append(N)
for j in range(2):
    N=int(input())
    b.append(N)
a.sort()
b.sort()
print(a[1]+a[2]+a[3]+b[1])