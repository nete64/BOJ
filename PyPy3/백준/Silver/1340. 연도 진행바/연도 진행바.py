v=list(map(str,input().split()))
months=["January","February","March","April","May","June","July","August","September","October","November","December"]
days=[31,28,31,30,31,30,31,31,30,31,30,31]
y=int(v[2])
m=int(v[1].split(',')[0])
my=365

if y%400==0 or (y%4==0 and y%100!=0):
    my+=1

t=0
for i in range(0,months.index(v[0])):
    t+=days[i]
    if i==1 and my==366:
        t+=1
        
tt=v[3].split(":")
hh=int(tt[0])
mm=int(tt[1])
print(((t+m-1)*1440+hh*60+mm)/(my*1440)*100)