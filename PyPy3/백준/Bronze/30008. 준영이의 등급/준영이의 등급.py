N,K=map(int,input().split())
G=list(map(int,input().split()))
a=[-1,4,11,23,40,60,77,89,96]
b=[4,11,23,40,60,77,89,96,100]
for i in range(K):
    P=G[i]*100//N
    for j in range(len(a)):
        if a[j]<P<=b[j]:
            print(f"{j+1} ",end='')
            break