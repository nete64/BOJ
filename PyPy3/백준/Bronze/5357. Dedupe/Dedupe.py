T = int(input())
for i in range(T):
    s = input()
    k = ''
    for c in s:
        if c != k:
            print(f"{c}",end='')
            k = c
    print("\n",end='')