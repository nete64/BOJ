k=int(input())
while k%10==0:
    k//=10
print(str(k).count('0'))