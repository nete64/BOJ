t=int(input())
for i in range(t):
    n=int(input())
    
    x=y=0
    for j in range(n):
        a,b=map(str,input().split())
        if a=="R" and b=="S":x+=1
        elif a=="R" and b=="P":y+=1
        elif a=="S" and b=="R":y+=1
        elif a=="S" and b=="P":x+=1
        elif a=="P" and b=="R":x+=1
        elif a=="P" and b=="S":y+=1
    
    if x>y:print("Player 1")
    elif x<y:print("Player 2")
    else:print("TIE")