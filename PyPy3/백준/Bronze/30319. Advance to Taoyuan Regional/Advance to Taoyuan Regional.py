y,m,d=map(int,input().split('-'))
if m==9:
    if 30-d+21>=35:print("GOOD")
    else:print("TOO LATE")
elif m>=10:print("TOO LATE")
else:print("GOOD")