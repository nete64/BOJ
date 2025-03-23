s=input()
if '7' not in s:
    if int(s) % 7 != 0: print("0")
    else: print("1")
else:
    if int(s) % 7 != 0: print("2")
    else: print("3")