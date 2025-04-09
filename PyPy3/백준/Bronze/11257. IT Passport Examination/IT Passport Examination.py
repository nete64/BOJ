T=int(input())
for i in range(T):
    s,a,b,c=map(int,input().split())
    print(f"{s} {a+b+c} ",end='')
    if a+b+c>=55 and a>=11 and b>=8 and c>=12:
        print("PASS")
    else:
        print("FAIL")