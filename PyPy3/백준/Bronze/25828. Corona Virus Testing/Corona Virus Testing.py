g,p,t=map(int,input().split())
if g*p<g+p*t:print(1)
elif g*p>g+p*t:print(2)
else:print(0)