T=int(input())
for i in range(T):
    a,b=map(int,input().split())
    r=0
    while a>0:
        r+=a&1
        a//=2

    if r%2==1 and b==1:
        print("Valid")
    elif r%2==0 and b==0:
        print("Valid")
    else:
        print("Corrupt")