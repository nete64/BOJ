N=int(input())
K=input()
o=0;e=0
for c in K:
    d=ord(c)-ord('0')
    if d%2==0:e+=1
    else:o+=1
if o>e:print(1)
elif o<e:print(0)
else:print(-1)