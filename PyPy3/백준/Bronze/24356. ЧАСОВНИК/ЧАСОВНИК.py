t1,m1,t2,m2=map(int,input().split())
a=t1*60+m1
b=t2*60+m2
if a>b:b+=1440
print(b-a, (b-a)//30)