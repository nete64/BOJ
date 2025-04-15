m={0:'N',1:'E',2:'S',3:'W'}
x=0
for i in range(10):
    t=int(input())
    if t==1:x+=1
    elif t==2:x+=2
    else:x-=1
    
    if x>3:x-=4
    elif x<0:x+=4
print(m[x])