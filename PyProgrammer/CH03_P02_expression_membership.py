
x = input("Enter expression : ");

""" 
6+3
data [6,3]
a=6
b=1
7
"""

if '+' in x:
    data = x.split('+')
    # print(data)
    a = float(data[0])
    b = float(data[1])
    print(a," + ",b," = ",a+b)

if '-' in x:
    data = x.split('-')
    a = float(data[0])
    b = float(data[1])
    print(a," - ",b," = ",a-b)
