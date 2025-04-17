n=int(input())
x=0;y=0
for i in range(n):
    a,b=map(int,input().split())
    if x>a or y>b:
        print("no")
        exit()
    x=a;y=b
print("yes")