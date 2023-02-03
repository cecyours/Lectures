

s = input("Enter your String : ")

print(s,s.capitalize(),sep=" | ")


print(s,s.casefold(),sep=" | ")

print(s,s.center(10,'*'),sep=" | ")

print(s,s.count('a'),sep=" | ")

print(s,s.encode(),sep=" | ")

x = "Ha\tppy\tme"
print(x,x.expandtabs(2),sep=" | ")

print(s,s.find("hi"),sep=" | ")

# print(s,    )

statement = "Hello {name}."
print(s,statement.format(name=s),sep=" | ")


data = {"marks":89,"student":"rupesh"}
result = "Hello {student} your result is {marks}"
print(result.format_map(data))

try:
    print(s,s.index('a'),sep=" | ")
except:
    print("a not found..")


