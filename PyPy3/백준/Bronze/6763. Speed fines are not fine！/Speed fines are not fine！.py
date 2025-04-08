a=int(input())
b=int(input())
if b-a<=0:
    print("Congratulations, you are within the speed limit!")
else:
    print("You are speeding and your fine is ",end='')
    if 1<=b-a<=20:
        print("$100.")
    elif 21<=b-a<=30:
        print("$270.")
    else:
        print("$500.")