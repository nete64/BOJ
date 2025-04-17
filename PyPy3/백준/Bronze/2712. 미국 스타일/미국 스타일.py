T=int(input())
for i in range(T):
    a,b=map(str,input().split())
    x=float(a)
    if b=="kg":
        print(f"{2.2046*x:.4f} lb")
    elif b=="l":
        print(f"{0.2642*x:.4f} g")
    elif b=="lb":
        print(f"{0.4536*x:.4f} kg")
    elif b=="g":
        print(f"{3.7854*x:.4f} l")