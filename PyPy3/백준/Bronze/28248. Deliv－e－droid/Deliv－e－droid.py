P=int(input())
C=int(input())
s=0
s+=P*50
s-=C*10
if P>C:s+=500
print(s)