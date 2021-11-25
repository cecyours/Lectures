
class Student:
	def say(self):
		print("Hello World");

	def bye(self):
		print("\u2759 \u8362");

# Source Code -> intepreted -> byteCode : python
# source Code -> compile -> object Code : C

s = Student();
s.say();
s.bye();

#######################

a = 10
print("data type : ",a,type(a))

a = "Heyy"
print("data type : ",a,type(a))
