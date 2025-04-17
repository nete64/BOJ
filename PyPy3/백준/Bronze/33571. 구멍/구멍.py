m="AaBbDdegOoPpQqR@"
S=input()
r=0
for c in S:
    if c in m:
        if c=='B':
            r+=2
        else:
            r+=1
print(r)