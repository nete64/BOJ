t="ABCDEFGHIJKLMNOPQRSTUVWXYZ"
T=int(input())
for i in range(T):
    r=0
    s=input()
    for c in t:
        if c not in s:
            r+=ord(c)
    print(r)