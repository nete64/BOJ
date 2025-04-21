while True:
    try:
        N,w,d,k=map(int,input().split())
        x=w*(N*(N-1)//2)-k
        if x==0:
            print(N)
            continue
        print(x//d)
        
    except EOFError:
        break