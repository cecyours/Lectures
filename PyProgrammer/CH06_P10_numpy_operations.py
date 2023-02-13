
import numpy as np

a = np.arange(100)


print(a)

print("-----------")
x = a.reshape(5,20)

print(x)

x = np.ones((20,20))
print(x)

x = np.empty((3,3))
print(x)

x = np.full((10,10),6)
print(x)

x = np.eye(40,40)
print(x)    

x = np.linspace(90,100,num=5)
print(x,sum(x))


import random as r

print(r.choices(range(1,19),k=4))