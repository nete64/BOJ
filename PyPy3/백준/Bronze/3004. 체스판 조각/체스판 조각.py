N=int(input())

dp=[0]*102
dp[1]=2
for i in range(2,N+1):
    dp[i]=dp[i-1]+(i+2)//2
print(dp[N])