a=[0]*10
for i in range(5):
    a[int(input())]+=1
for k in [1,3,5]:
    if k in a:
        print(a.index(k))
        break