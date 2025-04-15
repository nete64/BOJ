m={0:'N',1:'E',2:'S',3:'W'}
x=0
for i in range(10):
    x+=int(input())
print(m[x%4])