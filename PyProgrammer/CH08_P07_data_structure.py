

class Node:
    def __init__(self,data):
        self.data = data
        self.next = None
        
    def display(self):
        return self.data


n1 = Node(10)
n2 = Node(20)
n3 = Node(30)
n4 = Node(40)


n1.next=n2
n2.next=n3
n3.next=n4
# n4.next=n1
temp = n1

while temp:
    print(temp.data)
    temp = temp.next
