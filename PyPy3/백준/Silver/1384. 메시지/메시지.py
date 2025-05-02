c=1
while True:
    N=int(input())
    if N==0:
        break
    
    print(f"Group {c}")
    p=[]
    s=[]
    b=True
    for i in range(N):
        A=list(map(str,input().split()))
        p.append(A[1:])
        s.append(A[0])
    for i in range(N):
        for j in range(N-1):
            if p[i][j]=='N':
                print(f"{s[(i-(j+1))%N]} was nasty about {s[i]}")
                b=False
    if b==True:
        print("Nobody was nasty")
    print()
    c+=1