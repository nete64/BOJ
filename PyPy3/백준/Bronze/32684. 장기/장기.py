A=list(map(int,input().split()))
B=list(map(int,input().split()))
s=[13,7,5,3,3,2]
x=0;y=1.5
for i in range(6):
    x+=A[i]*s[i]
    y+=B[i]*s[i]
if x>y:
    print("cocjr0208")
else:
    print("ekwoo")