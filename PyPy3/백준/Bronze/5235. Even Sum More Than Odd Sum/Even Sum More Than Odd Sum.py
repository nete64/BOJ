T=int(input())
for i in range(T):
    A=list(map(int,input().split()))
    A=A[1:]
    e=sum(filter(lambda x: x%2==0, A))
    o=sum(filter(lambda x: x%2==1, A))

    if e>o:print("EVEN")
    elif e<o:print("ODD")
    else:print("TIE")