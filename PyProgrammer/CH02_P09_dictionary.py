

data = {"Mukesh":99.00,"Heena":53.64,"Rupesh":99.75,"Keyboard":77.88};

print(data)


name = input("Enter your name : ");

try:
    print(name," your marks is", data[name]);
except :
    print("invalid name...")