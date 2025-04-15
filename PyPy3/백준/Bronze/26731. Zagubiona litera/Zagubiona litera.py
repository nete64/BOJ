a=[0] * 26
s=input()
for c in s:
    a[ord(c)-ord('A')]+=1
for i in range(len(a)):
    if a[i]==0:
        print(chr(i+ord('A')))