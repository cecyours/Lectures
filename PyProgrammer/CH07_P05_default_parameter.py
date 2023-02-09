
def table(x=10): # paramter
    pass
    print("{:2} + {:2} + {:2}".format("--","--","--"))

    for i in range(1,11):
        print("{:2} x {:2} = {:2}".format(x,i,x*i))


y = int(input("Enter the number : "))
table(y) # argument

table() #default arg.