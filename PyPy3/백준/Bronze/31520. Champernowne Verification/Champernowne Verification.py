s=input()
for i in range(len(s)):
    if i!=ord(s[i])-ord('1'):
        print(-1)
        exit(0)
print(len(s))