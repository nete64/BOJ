def fac(n):
    ret=1
    for i in range(1,n+1):
        ret*=i
    return ret

print("n e\n- -----------")
for i in range(10):
    e=0
    for j in range(0,i+1):
        e+=1/fac(j)
    if e==int(e):
        print(f"{i} {int(e)}")
    elif i==2:
        print(f"{i} {float(e)}")
    else:
        print(f"{i} {e:.9f}")