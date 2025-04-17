while True:
    N=int(input())
    if N==0:break
    
    A=list(map(int,input().split()))
    s=0
    for i in range(N-2):
        s=max(s,A[i]+A[i+1]+A[i+2])
    print(s)