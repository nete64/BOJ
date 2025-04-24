T=int(input())
for i in range(T):
    n=int(input())
    if n==1:
        print("#\n")
        continue
    
    print("#"*n)
    for j in range(n-2):
        print("#",end='')
        print("J"*(n-2),end='')
        print("#")
    print("#"*n)
    print()