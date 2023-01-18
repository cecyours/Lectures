
# +ve ,-ve : True
# zero : false

b = bool(-32)
print(b)

print("------------------------------")

li = ["Coder"]

b = bool(li)
print(b)

n = int(input("Enter the number : "))
m = int(input("Enter the number : "))

v = n>m

print("value in boolean : ",v);
if v:
    print("blc A max is",n);
else:
    print("blc B max is ",m);