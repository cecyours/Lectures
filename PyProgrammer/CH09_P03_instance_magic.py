

class Task:

    def __init__(self,name): #contructor
        self.name = name
        print("i am ",self.name)
    

    def __del__(self): # destructor
        print("i am deleted ",self.name)


obj1 = Task("Rupesh")
obj2 = Task("Krishna")
del obj1 # manual delete
input("i am waiting..")


