for _ in range(0,int(input())):
    s=input()

    n=len(s)

    res=0
    i=0
    while(i<n-1):
        # print("i->",i)
        if(s[i]=='x' and s[i+1]=='y'):
            res+=1
            i+=2
        elif (s[i]=='y' and s[i+1]=='x'):
            res+=1
            i+=2
        else:
            i+=1
    print(res)