

arr = [12,'31','Hello','p',{1,2,3,4},[1,2,4,63,67],("Hello",)]

for i in arr:
    print(i,type(i))


import array as ar

a = ar.array('i',[])

# print(a)

# for i in a:
#     print(i)

x = int(input("Enter the size : "))

for i in range(x):
    data = int(input("Enter the element : "))
    a.append(data)


print(a,max(a),min(a))