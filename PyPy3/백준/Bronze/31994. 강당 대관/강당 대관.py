x=""
y=0
for i in range(7):
    a,b=map(str,input().split())
    if y<int(b):
        x=a
        y=int(b)
print(x)