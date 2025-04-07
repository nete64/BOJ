D,H,M=map(int,input().split())
M+=D*1440
M+=H*60
if M-16511<0:
  print("-1")
else:
  print(M-16511)