p=10**10
while True:
    x=float(input())
    if x==999:break
    
    if p==10**10:
        p=x
        continue
    print(f"{x-p:.2f}")
    p=x