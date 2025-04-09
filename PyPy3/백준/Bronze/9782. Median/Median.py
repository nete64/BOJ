c=1
while True:
    d=list(map(int,input().split()))
    N=d[0]
    if N==0: break
    
    print(f"Case {c}: ",end='')
    if N%2==0:
        print(f"{(d[(N+1)//2]+d[(N+1)//2+1])/2:.1f}")
    else:
        print(f"{d[(N+1)//2]:.1f}")
    c+=1