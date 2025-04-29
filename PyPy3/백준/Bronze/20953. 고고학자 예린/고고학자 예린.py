import sys
input=sys.stdin.readline

T=int(input())
for i in range(T):
    a,b=map(int,input().split())
    print((a+b)*((a+b)*(a+b-1)//2))