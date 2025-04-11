m={"Lion":0,"Tiger":0}
for i in range(9):
    s=input()
    m[s]+=1
if m["Lion"]>4:print("Lion")
else:print("Tiger")