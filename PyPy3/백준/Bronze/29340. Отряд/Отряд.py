a=input()
b=input()
for i in range(len(a)):
    print(chr(max(ord(a[i]),ord(b[i]))),end='')