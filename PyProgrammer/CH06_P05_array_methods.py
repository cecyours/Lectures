
import array as arr

a = arr.array('i',[10,20,30,40,50,60,70,80,90,10])

a.append(99)

print(a)

a.remove(20)
print(a)

# H.W which number is most repeated..
x = a.count(10);
print(a,x)

b = arr.array('i',[33,44,66,78])

a.extend(b)

print(a)
print(b)

# index,value
a.insert(5,99)
print(a)


data = [12,3,4,5,6,7,8,90]

a.fromlist(data)
print(a)


a.frombytes(b.tobytes())
print(a)


a.pop(1)
print(a)

a.reverse()
print(a)
