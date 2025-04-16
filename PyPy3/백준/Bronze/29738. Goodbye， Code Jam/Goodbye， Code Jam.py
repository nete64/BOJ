T=int(input())
for i in range(T):
    N=int(input())
    print(f"Case #{i+1}: ",end='')
    if N<=25:print("World Finals")
    elif N<=1000:print("Round 3")
    elif N<=4500:print("Round 2")
    else:print("Round 1")