T=int(input())
for i in range(T):
    r=0
    s=input()
    for j in range(0,len(s)//8):
        c=s.count("1",j*8,(j+1)*8-1)
        if c%2==1 and s[(j+1)*8-1]=='0':
            r+=1
        elif c%2==0 and s[(j+1)*8-1]=='1':
            r+=1
    print(r)