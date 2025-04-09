a=list(map(int,input().split()))
b=list(map(int,input().split()))
for i in range(len(a)):
    if b[0] == a[i]:
        print(i+1)
        exit()
print(0)