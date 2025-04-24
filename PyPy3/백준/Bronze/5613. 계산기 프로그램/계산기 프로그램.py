v=[]
while True:
    a=input()
    if a=='=':break
    
    v.append(a)
    if len(v)==3:
        if v[1]=='+':
            r=int(v[0])+int(v[2])
        elif v[1]=='-':
            r=int(v[0])-int(v[2])
        elif v[1]=='*':
            r=int(v[0])*int(v[2])
        elif v[1]=='/':
            r=int(v[0])/int(v[2])
        v.clear()
        v.append(r)
print(v[0])