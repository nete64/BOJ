import sys
input = sys.stdin.readline

m={'a':'4','e':'3','i':'1','o':'0','s':'5'}
s=input()
for c in m:
    s = s.replace(c,m[c])
print(s)