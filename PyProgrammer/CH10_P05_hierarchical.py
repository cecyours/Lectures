""" 
    A -> C
    A -> B

 """
class A:
    def display(self):
        print("I am A")

class B(A):
    pass

class C(A):
    pass

c = C()
b = B()

c.display()
b.display()