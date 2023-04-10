
class A:
    
    def display(self):
        print("i am A")


class B(A):
    
    def display(self):
        super().display()
        print("i am B")


class C(B):
    
    def display(self):
        super().display()
        print("i am C`")


c = C()

c.display()



