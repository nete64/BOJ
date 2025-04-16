while True:
    T=int(input())
    if T==0:break
    
    a=[]
    for i in range(T):
        a.append(int(input()))
    for i in reversed(range(T)):
        print(a[i])
    print(0)