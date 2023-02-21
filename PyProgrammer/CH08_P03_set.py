
s1 = {"Riya","Mohan","Suresh"}
s2 = {"Rio","Mohan","Tokyo"}

s2.difference_update(s1)
print(s2)

print(s1)
s1.discard("Riya")
print(s1)


print("----------")
s1 = {"Riya","Mohan","Suresh"}
s2 = {"Rio","Mohan","Tokyo"}

x = s1.intersection(s2)
print(x)


print("----------")
s1 = {"Riya","Mohan","Suresh"}
s2 = {"Rio","Mohan","Tokyo","Riya","Mohan","Suresh"}

print(s1)
print(s2)
print(s1.isdisjoint(s2))

print("----------")
s1 = {"Riya","Mohan","Suresh","Rupesh"}
s2 = {"Rio","Mohan","Tokyo","Riya","Mohan","Suresh"}

print(s1)
print(s2)
print(s1.issubset(s2))
