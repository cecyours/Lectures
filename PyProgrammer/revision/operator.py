#                       +,-,*,%

a = "10"
b = "20"

# print(a+b)
# print(a-b)
# print(a*b)
# print(a/b)
# print(a%b)
# __add__

#---------------------------------------------- Logical  Operator ----------------------------------------

# gates 

# a = int(input("Enter the value of a= "))
# b = int(input("Enter the value of b= "))

# if(a==b and a>=b):
#     print("And gate is applied and it is true")
# else:
#     print("False")
                                    #   _________________________
                                    #   |_______________________|
                                    #   |                       |
                                    #   |                       |
                                    #   |                       |
                                    #   |                       |
                                    #   |                       |
                                    #   |                       |
                                    #   |                       |
                                    #   |                       |
                                    #   |_______________________|

 
# num1 = int(input("Enter the value of num1= "))
# num2 = int(input("Enter the value of num2= "))

# if (num1==num2 or num1<num2):
#     print("Or gate is true boom")
# else:
#     print("false")

num1 = int(input("Enter the value of num1= "))
num2 = int(input("Enter the value of num2= "))

if (not(num1==num2 and num1<num2)):
    print("not gate is true boom")
else:
    print("false")
