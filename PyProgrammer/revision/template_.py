from string import Template

students = [("Vaibhav",23),("Riya",26),("Hardi",41),("Avantika",33),("Richa",21),("Khushi Ahuja",48)]

var = Template("THe student name is $name and the roll number is $roll ")

for i in students:
    print(var.substitute(name=i[0],roll=i[1]))