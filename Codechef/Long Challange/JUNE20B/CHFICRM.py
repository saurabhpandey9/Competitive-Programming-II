for _ in range(0,int(input())):
    n=int(input())
    c=list(map(int,input().split()))
    
    change=[1,0,0]

    flag=True
    if(c[0]!=5):
        print("NO")
        flag=False
    else:
        for i in range(1,n):
            if c[i]==5:
                change[0]+=1

            elif c[i]==10:
                if change[0]>0:
                    change[1]+=1
                    change[0]-=1
                else:
                    print("NO")
                    flag=False
                    break
            elif c[i]==15:
                if change[1]>0:
                    change[2]+=1
                    change[1]-=1
                elif change[0]>=2:
                    change[2]+=1
                    change[0]-=2
                else:
                    print("NO")
                    flag=False
                    break
    if flag:
        print("YES")





