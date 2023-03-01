

# A ->C
# B ->C


class A:

    def display(self):
        print("Hello A")


class B:

    def display(self):
        print("Hello B")



class C(B,A):
    pass

c = C()

c.display()