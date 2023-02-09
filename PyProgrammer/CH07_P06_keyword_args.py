

def table(start,end):
    for j in range(1,11):
        for i in range(start,end+1):
            print("+ {:2} - {:2} - {:2}".format("--","--","--"),end=" ",sep="-")
        print(" |")
        
        for i in range(start,end+1):
            print("| {:2} x {:2} = {:2}".format(i,j,i*j),end=" ")
        print(" | ")




s = int(input("Enter the start number : "))
e = int(input("  Enter the end number : "))

table(s,e)