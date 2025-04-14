m={"fdsajkl;":1,"jkl;fdsa":1,"asdf;lkj":2,";lkjasdf":2,"asdfjkl;":3,";lkjfdsa":4}
s=input()
if s not in m:print("molu")
elif m[s]==1:print("in-out")
elif m[s]==2:print("out-in")
elif m[s]==3:print("stairs")
elif m[s]==4:print("reverse")