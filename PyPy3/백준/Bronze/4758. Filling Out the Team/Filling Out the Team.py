while True:
    s=list(map(str,input().split()))
    a=float(s[0])
    b=int(s[1])
    c=int(s[2])
    if a==b==c==0:
        break
    
    k=0
    if a<=4.5 and b>=150 and c>=200:
        print("Wide Receiver ",end='')
        k=1
    if a<=6.0 and b>=300 and c>=500:
        print("Lineman ",end='')
        k=1
    if a<=5.0 and b>=200 and c>=300:
        print("Quarterback ",end='')
        k=1
    if k==0:
        print("No positions",end='')
    print()