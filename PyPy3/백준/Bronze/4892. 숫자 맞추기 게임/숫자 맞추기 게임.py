s=["even","odd"]

c=1
while True:
    n=int(input())
    if n==0:break
    n1=3*n
    n2=0
    if n1%2==0:
        n2=n1//2
    else:
        n2=(n1+1)//2
    n3=3*n2
    n4=n3//9
    print(f"{c}. {s[n1%2]} {n4}")
    
    c+=1