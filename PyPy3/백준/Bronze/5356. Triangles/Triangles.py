T=int(input())
for i in range(T):
    s=list(map(str,input().split()))
    n=int(s[0])
    for j in range(n):
        c=(ord(s[1])-ord("A")+j)%26
        print(chr(c+ord("A"))*(j+1))
    print()