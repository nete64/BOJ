s=input()
a,b=0,0
for i in range(len(s)):
    if s[i]=='A':a+=int(s[i+1])
    elif s[i]=='B':b+=int(s[i+1])
if a>b:print("A")
else:print("B")