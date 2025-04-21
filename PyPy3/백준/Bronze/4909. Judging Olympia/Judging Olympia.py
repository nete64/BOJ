while True:
    A=sorted(map(int,input().split()))
    if A[0]==A[1]==A[2]==A[3]==A[4]==A[5]==0:
        break
    s=(sum(A)-A[0]-A[5])/4
    if s==int(s):
        print(int(s))
    else:
        print((sum(A)-A[0]-A[5])/4)