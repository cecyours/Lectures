

# function called it self

def display():
    print("Hello Rupesh")
    # display()

display()



def display(list):
    if len(list)==0:
        return
    
    print(list[0],list)

    display(list[1:])

x = ["Apple","Banana","Cherry"]

display(x)