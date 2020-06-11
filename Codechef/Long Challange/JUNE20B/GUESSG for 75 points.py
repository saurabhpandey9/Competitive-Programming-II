import sys
def search(l,r):
    mid=l+(r-l)//2

    print(mid)
    sys.stdout.flush()

    alicans=input()

    if alicans=='E':
        exit(0)
    elif alicans=='G':
        t13=l+(r-l)//3
        print(t13)
        sys.stdout.flush()
        alicans=input()
        if alicans=='E':
            exit(0)
        elif alicans=='G':
            search(t13+1,r)
        elif alicans=='L':
            searchforlie(l,t13-1,mid+1,r,'L')

    elif alicans=='L':
        #baaki hai
        t23=l+(2*(r-l))//3
        print(t23)
        sys.stdout.flush()
        alicans=input()
        if alicans=='E':
            exit(0)
        elif alicans=='G':
            searchforlie(l,mid-1,t23+1,r,'G')
        elif alicans=='L':
            search(l,t23-1)



def searchforlie(l1,r1,l2,r2,lastans):
    tn=(r1-l1+1)+(r2-l2+1)

    if(lastans=='L'):
        t23=(2*tn)//3-(r1-l1+1)+l2

        print(t23)
        sys.stdout.flush()
        alicans=input()
        if alicans=='E':
            exit(0)
        elif alicans=='G':
            searchforlie(l1,r1,t23+1,r2,'G')
        else:
            search(l1,t23)
    
    elif lastans=='G':
        t13=(tn//3)+l1
        print(t13)
        sys.stdout.flush()
        alicans=input()
        if alicans=='E':
            exit(0)
        elif alicans=='G':
            search(t13+1,r2)
        elif alicans=='L':
            searchforlie(l1,t13-1,l2,r2,'L')



if __name__ == "__main__":
    n=int(input())
    search(1,n)
