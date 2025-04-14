A,B=map(int,input().split())
n=int(input())
for i in range(n):
    a=int(input())
    print(a, min(1000,a)*A + max(0,(a-1000))*B)