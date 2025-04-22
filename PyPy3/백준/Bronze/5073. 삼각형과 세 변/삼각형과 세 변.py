while True:
    A=sorted(map(int,input().split()))
    if A[0]==A[1]==A[2]==0:
        break
    
    if A[0]+A[1]<=A[2]:
        print("Invalid")
        continue
    
    if A[0]==A[1]==A[2]:
        print("Equilateral")
    elif A[0]!=A[1]!=A[2]:
        print("Scalene")
    else:
        print("Isosceles")