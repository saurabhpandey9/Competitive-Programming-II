for _ in range(0,int(input())):
    n,k=map(int,input().split())
    p=list(map(int,input().split()))

    res=0
    for i in range(0,n):
        if(p[i]>k):
            res+=(p[i]-k)
    print(res)