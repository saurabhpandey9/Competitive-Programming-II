#tom and jerry code chef

import math

mxn=10**18

arr=[]

xx=2
flag=2
while(xx<=mxn):
    arr.append(xx)
    xx*=2
    # flag+=1

# print(arr)

def divisor(x):

    flag=0
    while(flag<len(arr)):
        if(x%arr[flag]==0):
            flag+=1
        else:
            break
    return flag-1



for _ in range(0,int(input())):
    n=int(input())
    
    if n==1:
        print('0')
    elif n%2==1:
        print(n//2)
    else:

        zz=divisor(n)
        # print(arr[zz])

        if(n%arr[zz]==0 and 0):
            print('0')
        else:
            res=(n-1)//(arr[zz+1])

            
            # zz=countDivisibles(2,n,2)
            # zz+=1
            # num=2**zz
            # res=(n-2)//num
            print(int(res))




