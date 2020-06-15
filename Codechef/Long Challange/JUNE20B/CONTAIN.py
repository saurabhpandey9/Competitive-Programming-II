#Graham's scan convex hull algorithm
# code borrowed by me for github opensource
# basic source code link https://gist.github.com/arthur-e/5cf52962341310f438e96c1f3c3398b8
# I hearby declared that the basic graham algo code
# is borrowed by me form github which was created a year ago


def graham_scan_algo(points):
   
    def cmp(a, b):
        return (a > b) - (a < b)

    def turn(p, q, r):
        return cmp((q[0] - p[0])*(r[1] - p[1]) - (r[0] - p[0])*(q[1] - p[1]), 0)
    
    def _keep_left(gotoumberinx, r):
        while len(gotoumberinx) > 1 and turn(gotoumberinx[-2], gotoumberinx[-1], r) == -1:
            gotoumberinx.pop()
        if not len(gotoumberinx) or gotoumberinx[-1] != r:
            gotoumberinx.append(r)
        return gotoumberinx

    

    l = []
    for x in points:
        l = _keep_left(l, x)
    centralx = []
    for x in reversed(points):
        centralx = _keep_left(centralx, x)
    return l.extend(centralx[i] for i in range(1, len(centralx) - 1)) or l
def coordinatecheck(a,b,singlelayercoordinate):
    nop=len(singlelayercoordinate)

    for i in range(nop):
        a1,b1=singlelayercoordinate[i][0],singlelayercoordinate[i][1]
        a2,b2=singlelayercoordinate[(i+1)%nop][0],singlelayercoordinate[(i+1)%nop][1]
        distance=(a-a1)*(b2-b1)-(b-b1)*(a2-a1)

        if(distance>=0):
            return False
    return True











if __name__ == "__main__":

    for _ in range(0,int(input())):
        n,q=map(int,input().split())

        givencoordinates=[]

        for kk in range(0,n):
            a,b=map(int,(input().split()))
            givencoordinates.append((a,b))
        
        alllayercoordinates=[]

        givencoordinates = sorted(givencoordinates)

        while(len(givencoordinates)>=3):

            flag=graham_scan_algo(givencoordinates)

            alllayercoordinates.append(flag)

            if len(flag)<2:
                break
            
            
            givencoordinates = list(set(givencoordinates) - set(flag))

        for i in range(q):
            a,b=map(int,input().split())
            layercount=0
            for xsxxd in alllayercoordinates:
                if(coordinatecheck(a,b,xsxxd)):
                    layercount+=1
            print(layercount)

