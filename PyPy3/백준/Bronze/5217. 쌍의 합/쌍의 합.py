T=int(input())
for i in range(T):
    n=int(input())
    print(f"Pairs for {n}: ",end='')
    
    A=[]
    for j in range(1,n+1):
        for k in range(j+1,n+1):
            if j>k:
                break
            if j+k==n:
                A.append([j,k])
    
    for j in range(len(A)):
        for k in range(len(A[j])):
            print(f"{A[j][k]}",end='')
            if k<len(A[j])-1:
                print(" ",end='')
        if j<len(A)-1:
            print(", ",end='')
    print()