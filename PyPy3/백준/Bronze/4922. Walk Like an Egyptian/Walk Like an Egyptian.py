while True:
    N=int(input())
    if N==0:
        break
    
    c=1
    s=2
    while c<=(N-1)**2:
        c+=s
        s+=2
    print(f"{N} => {c}")