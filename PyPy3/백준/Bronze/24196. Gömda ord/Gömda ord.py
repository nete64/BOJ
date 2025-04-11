s=input()
i=0
r=""
while i<len(s):
    r=r+s[i]
    i+=(ord(s[i])-ord('A')+1)
print(r)