w,h=map(int,input().split())
a=[]
c=0
for i in range(w):
    a.append(input())
k=input()
for i in range(w):
    s=input()
    for j in range(h):
        if a[i][j] == s[j]:
            c+=1
print(c)