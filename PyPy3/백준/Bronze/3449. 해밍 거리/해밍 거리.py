T=int(input())
for i in range(T):
    a=input()
    b=input()
    r=0
    for j in range(len(a)):
        if a[j]!=b[j]:
            r+=1
    print(f"Hamming distance is {r}.")