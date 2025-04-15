N=int(input())
a=list(map(int,input().split()))
for k in a:
    if k==300:print("1 ",end='')
    elif 275<=k<300:print("2 ",end='')
    elif 250<=k<275:print("3 ",end='')
    else:print("4 ",end='')