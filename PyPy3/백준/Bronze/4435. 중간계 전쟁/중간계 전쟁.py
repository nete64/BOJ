a=[1,2,3,3,4,10]
b=[1,2,2,2,3,5,10]

T=int(input())

for i in range(T):
    w=list(map(int,input().split()))
    
    x=0
    for j in range(len(w)):
        x+=w[j]*a[j]
    
    w=list(map(int,input().split()))
    
    y=0
    for j in range(len(w)):
        y+=w[j]*b[j]
    
    print(f"Battle {i+1}: ",end='')
    if x>y:
        print("Good triumphs over Evil")
    elif x<y:
        print("Evil eradicates all trace of Good")
    else:
        print("No victor on this battle field")