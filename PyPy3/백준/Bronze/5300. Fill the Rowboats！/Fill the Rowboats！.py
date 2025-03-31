n=int(input())
for i in range(n):
    print(f"{i+1} ",end='')
    if i % 6 == 5:
        print("Go! ",end='')
if n % 6 != 0:
    print("Go! ",end='')