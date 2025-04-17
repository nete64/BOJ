A=[]
b=0
for i in range(5):
    A.append(input())
for i in range(5):
    if "FBI" in A[i]:
        print(f"{i+1} ",end='')
        b=1
if b==0:
    print("HE GOT AWAY!")