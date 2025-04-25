v=[0]*26
N=int(input())
for i in range(N):
    s=input()
    v[ord(s[0])-ord('a')]+=1

b=False 
for i in range(26):
    if v[i]>=5:
        print(chr(ord('a')+i),end='')
        b=True
        
if b==False:
    print("PREDAJA")