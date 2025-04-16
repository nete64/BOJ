m={'j':2,'o':1,'i':2}
N=int(input())
s=input()
r=0
for c in s:
    r+=m[c]
print(r)