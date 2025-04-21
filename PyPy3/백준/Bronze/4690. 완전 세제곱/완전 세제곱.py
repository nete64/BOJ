for l in range(2, 101):
    for i in range(2,101):
        for j in range(i+1,101):
            for k in range(j+1,101):
                a=l**3
                b=i**3+j**3+k**3
                if a==b:
                    print(f"Cube = {l}, Triple = ({i},{j},{k})")