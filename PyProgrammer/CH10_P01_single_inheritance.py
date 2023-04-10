
class A: # super class
    def display(self):
        print("welcome class A ",self)

class B(A): # base class
    def display2(self):
        print("welcome class B",self)


b = B()
b.display() #B