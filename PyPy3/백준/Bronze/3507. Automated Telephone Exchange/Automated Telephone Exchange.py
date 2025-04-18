n=int(input())
r=0
for i in range(100):
    for j in range(100):
        if n-i-j==0:
            r+=1
print(r)