while True:
    N=int(input())
    if N==0:
        break
    print(f"{N} => {N*(N-1)+1}")