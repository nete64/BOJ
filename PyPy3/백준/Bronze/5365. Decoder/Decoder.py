n=int(input())
arr=input().split(" ")
print(arr[0][0],end='')
for i in range(1,n):
    if len(arr[i-1])<=len(arr[i]):
        a=arr[i][len(arr[i-1])-1]
    else:
        a=" "
    print(a,end='')