n = int(input())
s = input()
r = 0
for c in s:
  if c in ['a', 'i', 'u', 'e', 'o']:
    r+=1
print(r)