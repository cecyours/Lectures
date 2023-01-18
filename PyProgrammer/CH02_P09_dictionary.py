import os

data = {"Mukesh":99.00,"Heena":53.64,"Rupesh":99.75,"Keyboard":77.88};



want = True

while want:
    os.system("clear");
    print(data)
    name = input("Enter your name : ");

    try:
        print(name," your marks is", data[name]);
    except :
        print("invalid name...")
    
    choice = input("do you want to repeat [Y/N]: ")
    
    if choice == "Y" or choice =='y':
        want = True
    else:
        want = False
