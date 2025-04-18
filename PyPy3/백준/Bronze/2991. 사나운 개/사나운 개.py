A,B,C,D=map(int,input().split())
P=list(map(int,input().split()))
for i in range(3):
    r=0
    if (P[i]-1)%(A+B)<A:r+=1
    if (P[i]-1)%(C+D)<C:r+=1
    print(r)