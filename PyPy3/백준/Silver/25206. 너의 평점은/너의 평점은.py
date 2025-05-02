v={"A+":4.5,"A0":4.0,"B+":3.5,"B0":3.0,"C+":2.5,"C0":2.0,"D+":1.5,"D0":1.0,"F":0.0}
s=t=0
for i in range(20):
    A=list(map(str,input().split()))
    if A[2]!='P':
        t+=float(A[1])
        s+=v[A[2]]*float(A[1])
print(s/t)