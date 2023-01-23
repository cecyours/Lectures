
fruits = ["Apple","Banana","Mango","Cherry"]

x = input("Enter your requirement : ")

if x in fruits:
    print("available .. ",x);

if x not in fruits:
    print(x,"is not unavailable, plz buy another choose  any",fruits)


print("----------------------")

fruits = {"Apple":199,"Banana":900,"Mango":199,"Cherry":100}



if x in fruits.keys():
    print(x,"is available .. give me $",fruits[x]);

