n,d=map(int,input().split())
a=[]
for i in range(n):
    a.append(int(input()))
for k in a:
    print(k*(d//sum(a)))