

class Student:
    def __init__(self):
        self.name = None
        self.rollno = None
    
    def display(self):
        print(self.name,self.rollno)


class Result(Student):

    def __init__(self):
        self.marks = None
        self.status = None
     
    def display(self): 
        super().display()
        print(self.marks,self.status)



s1 = Result()
s1.name = "suresh"
s1.rollno = 12
s1.marks = 29

if s1.marks>33:
    s1.status = "pass"
else:
    s1.status = "Better luck next time"

s1.display()