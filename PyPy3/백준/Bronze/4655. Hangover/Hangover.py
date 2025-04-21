while True:
    c=float(input())
    if c==0.00:
        break
    
    s=0
    i=2
    while True:
        s+=1/i
        if s>=c:
            print(f"{i-1} card(s)")
            break
        i+=1