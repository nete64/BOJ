a=int(input())
b=int(input())
c=int(input())
d=[9,7,8,0,9,2,1,4,1,8,a,b,c]
s=0
for i in range(len(d)):
    if i % 2 == 0:
        s += d[i]
    else:
        s += d[i] * 3
print(f"The 1-3-sum is {s}")