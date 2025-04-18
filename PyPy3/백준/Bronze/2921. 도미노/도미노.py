N=int(input())

dp=[0]*1002
dp[1]=3
for i in range(2,N+1):
    dp[i]=dp[i-1]+(3*(i**2)+3*i)//2
print(dp[N])