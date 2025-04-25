N=int(input())
for i in range(N):
    s=input()
    m=len(s)//2
    if s[m]==s[m-1]:
        print("Do-it")
    else:
        print("Do-it-Not")