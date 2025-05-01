v=[[0]*5 for i in range(5)]
T=int(input())
for i in range(T):
    a,b=map(int,input().split())
    v[a-1][b-1]=v[b-1][a-1]=1
if v[0][2]==1 and v[0][3]==1 and v[2][3]==1 and v[0][1]==0 and v[0][4]==0:
    print("Wa-pa-pa-pa-pa-pa-pow!")
else:
    print("Woof-meow-tweet-squeek")