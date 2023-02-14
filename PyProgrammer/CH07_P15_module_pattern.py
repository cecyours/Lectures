
def printRect(n,m):
    for i in range(1,n+1):
        for j in range(1,m+1):
            if(i%j==0):
                print(" \u2764 ",end="")
            else:
                print(" * ",end="")
        print()