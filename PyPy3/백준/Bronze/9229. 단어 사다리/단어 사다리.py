while True:
    s=input()
    if s=="#":
        break
    
    p=s
    f=True
    while True:
        t=input()
        if t=="#":
            break
        
        if len(t)!=len(p):
            f=False
        else:
            c=0
            for i in range(len(t)):
                if t[i]!=p[i]:
                    c+=1
            if c!=1:
                f=False
        p=t
    if f==True:
        print("Correct")
    else:
        print("Incorrect")