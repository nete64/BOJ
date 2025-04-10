a=[]
for i in range(6):
    s=input()
    a.append(s)
c=a.count("W")
if c>=5:print(1)
elif c>=3:print(2)
elif c>=1:print(3)
else:print(-1)