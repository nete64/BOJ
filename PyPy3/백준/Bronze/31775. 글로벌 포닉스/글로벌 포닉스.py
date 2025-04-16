a=input()
b=input()
c=input()

def f(s):
    if s[0]=='l':return 1
    elif s[0]=='k':return 2
    elif s[0]=='p':return 4 
    return 0

if f(a)+f(b)+f(c)==7:
    print("GLOBAL")
else:
    print("PONIX")