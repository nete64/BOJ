a,b,c=map(int,input().split(':'))
d,e,f=map(int,input().split(':'))
c+=b*60+a*3600
f+=e*60+d*3600
f-=c
if f<=0:f+=86400
print(f"{f//3600:02}:{f%3600//60:02}:{f%3600%60:02}")