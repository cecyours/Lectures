

x = int(input("Enter your age : "))
y = int(input("Enter your age : "))
z = int(input("Enter your age : "))


if x>y:
    if x>z:
        print(x," is higher #1")
    else:
        print(z,"is higher #2")
else:
    if y>z:
        print(y,"is higher #3")
    else:
        print(z,"is higher #4")