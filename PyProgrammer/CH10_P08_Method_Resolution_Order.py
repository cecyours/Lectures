# A -> B -> C
# D -> B


class A:
    def __init__(self):
        super().__init__()
        print("I am A..")


class D:
    def __init__(self):
        super().__init__()
        print("I am D...");


class B(D,A):
    def __init__(self):
        super().__init__()
        print("I am B")
    
class C(B):
    def __init__(self):
        super().__init__()
        print("I am C")


c = C()

print("-----------")
print(C.__mro__)
