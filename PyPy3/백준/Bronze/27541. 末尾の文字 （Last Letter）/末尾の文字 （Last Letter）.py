N=int(input())
S=input()
if S[-1::1]=='G':print(S[0:N-1])
else:print(f"{S[0:N]}G")