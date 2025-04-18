A=[]
q=int(input())

for i in range(q):
    s=input()
    A.append(s)

t=int(input())
for i in range(t):
    r=int(input())
    
    print(f"Rule {r}: ",end='')
    
    if 1<=r<=len(A):
        print(A[r-1])
    else:
        print("No such rule")