c=1
while True:
    o,w=map(int,input().split())
    if o==w==0:
        break
    
    isDead=False
    while True:
        a,b=map(str,input().split())
        if a=='#' and b=='0':
            break
        
        if a=='F':
            w+=int(b)
        else:
            w-=int(b)
        
        if w<=0:
            isDead=True
            
    if isDead==False:
        if w>o/2 and w<o*2:
            print(f"{c} :-)")
        else:
            print(f"{c} :-(")
    else:
        print(f"{c} RIP")
    c+=1