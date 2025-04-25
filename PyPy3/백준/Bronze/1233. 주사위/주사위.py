v=[0]*100
s=list(map(int,input().split()))
for i in range(1,s[0]+1):
    for j in range(1,s[1]+1):
        for k in range(1,s[2]+1):
            v[i+j+k]+=1
mx=max(v)
for i in range(len(v)):
    if mx==v[i]:
        print(i)
        break