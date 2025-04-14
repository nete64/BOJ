n=int(input())
for i in range(n):
    a=list(map(int,input().split()))
    c=0
    for k in a:
        print(f"{k} ",end='')
        if k >= 10:c+=1
    if c==0:print("\nzilch\n")
    elif c==1:print("\ndouble\n")
    elif c==2:print("\ndouble-double\n")
    else:print("\ntriple-double\n")