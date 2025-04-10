a=[]
for i in range(3):
    n=int(input())
    a.append(n)
print(min(a[1]*2+a[2]*4,a[0]*2+a[2]*2,a[0]*4+a[1]*2))