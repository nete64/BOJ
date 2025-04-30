N=int(input())
r=0
for i in range(1,N):
    for j in range(i+2,N):
        k=N-i-j
        if k%2==1 or k<=0:
            continue
        r+=1
print(r)