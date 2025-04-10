a,b,c=map(int,input().split())
d,e,f=map(int,input().split())
if a<d:
    if b<e or (b==e and c<=f):x=d-a
    else:x=d-a-1
else:
    x=d-a
print(f"{x}\n{d-a+1}\n{d-a}")