T=int(input())
for i in range(T):
    C=int(input())
    a=C//25
    b=(C%25)//10
    c=(C%25%10)//5
    d=C%25%10%5
    print(a,b,c,d)