s=input()
i=-1
r=-1
while True:
    i=s.find("DKSH",i+1)
    r+=1
    if i==-1:
        break
print(r)