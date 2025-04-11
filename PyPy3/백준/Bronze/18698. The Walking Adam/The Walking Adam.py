T=int(input())
for i in range(T):
    s=input()
    k=0
    for c in s:
        if c=='D':break
        k+=1
    print(k)