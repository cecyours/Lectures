

class A:
    def display(self):
        print("Hello World..")


class B(A):
    pass


class E:
    def print(self):
        print("Hi there")


class D(E):
    pass

class C(B,D):
    pass

class F(C):
    pass

f = F()
f.display()
f.print()

