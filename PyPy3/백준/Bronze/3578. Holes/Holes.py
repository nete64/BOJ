d={'0':1,'4':1,'6':1,'8':2,'9':1}
h=int(input())

s=0
if h==0:print(1)
elif h==1:print(0)
else:
    if h%2==1:print("4",end='')
    print("8"*(h//2),end='')