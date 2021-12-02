



maths = int(input("Enter marks of Math : "))
sceince = int(input("Enter marks of Science : "))
english = int(input("Enter marks of english : "))

avg = (maths+sceince+english)/3

print("avg : ",avg) 

# input("Enter any key to continue...") 

if maths >= 33 and english >= 33 and sceince >= 33:
	print("Pass ...\u1741t\t",avg)
else:
	print("Fail ... \u1020\t",avg)


print("\n------------------");
print(" int : ",type(maths),"float : ",type(avg))

a = "10.3" #str,int,float

f = float(a) #str->float : 10.3
i = int(f); # float->int 10

print("i ",i,"\nf",f)
