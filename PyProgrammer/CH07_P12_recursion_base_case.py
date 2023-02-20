
def display(data):
    print(data[-1],end=' ')
    if(len(data)==1):
        return
    display(data[:-1])

display("Rupesh")

