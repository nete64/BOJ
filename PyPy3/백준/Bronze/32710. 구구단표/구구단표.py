N=int(input())
for i in range(2,10):
    for j in range(1,10):
        if N==i or N==j or N==i*j:
            print(1)
            exit()
print(0)