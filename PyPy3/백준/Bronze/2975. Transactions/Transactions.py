while True:
    A=list(map(str,input().split()))
    if A[0]=='0' and A[1]=='W' and A[2]=='0':break
    
    if A[1]=='W':
        r=int(A[0])-int(A[2])
        if r<-200:print("Not allowed")
        else:print(r)
    else:
        r=int(A[0])+int(A[2])
        print(r)