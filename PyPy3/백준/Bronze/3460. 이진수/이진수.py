T=int(input())
for i in range(T):
    s=bin(int(input()))[2:]
    for j in reversed(range(len(s))):
        if s[j]=='1':
            print(f"{len(s)-j-1} ",end='')