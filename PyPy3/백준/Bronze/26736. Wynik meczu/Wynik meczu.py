a=[0,0]
s=input()
for i in range(len(s)):
    a[ord(s[i])-ord('A')]+=1
print(f"{a[0]} : {a[1]}")