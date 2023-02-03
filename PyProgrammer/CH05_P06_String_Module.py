import string 


# constants..
print(string.ascii_letters)
print(string.ascii_uppercase)
print(string.ascii_lowercase)
print(string.hexdigits)
print(string.octdigits)
print(string.printable)
print(string.punctuation)



t = string.Template("my name is {$name}")

print(t.substitute({'name':'gk'}))

