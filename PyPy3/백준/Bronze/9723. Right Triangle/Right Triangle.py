N = int(input())
c = 1
for i in range (N):
    a=list(map(int,input().split()))
    a.sort()
    if a[0]*a[0]+a[1]*a[1]==a[2]*a[2]:
        print(f"Case #{c}: YES")
    else:
        print(f"Case #{c}: NO")
    c+=1