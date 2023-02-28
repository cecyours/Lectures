

class Task:
    
    def display(self): # called by object
        print("I am instance...")

    @classmethod
    def display_class(self): # called by class+object with self
        print("i am class ..")


    @staticmethod
    def display_static():# called by class+object but no self
        print("i am static")

t = Task()
t.display()
# Task.display() # error

# Task.display()

Task.display_class();


Task.display_static()

t.display_static()
