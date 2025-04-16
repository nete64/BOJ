N=int(input())
S=input()
T=input()
r=0
for i in range(len(S)):
    if S[i]!=T[i]:r+=1
print(r)