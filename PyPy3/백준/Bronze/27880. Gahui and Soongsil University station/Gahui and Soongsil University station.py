s=0
for i in range(4):
    a,b=map(str,input().split())
    if a=="Es":s+=21*int(b)
    else:s+=17*int(b)
print(s)