N = int(input())
for i in range (N):
    e = input()
    k = int(input())
    s = 0
    for j in range (k):
        m = int(input())
        s += m
    if s % k == 0:
        print("YES")
    else:
        print("NO")