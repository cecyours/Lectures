# 
# 9     9      2

# 7     6      1 
# 
# 7     3      8

import numpy as np

a = np.array([
    [1,2,4],
    [9,1,6],
    [6,3,5],
])


print(a[1][2])

for i in a:# row
    for j in i: #column
        print(j,end=" ")
    print()

print("------------------------------")
print(a)
print("------------------------------")


x = np.arange(30)

# print(x)
x.shape = (5,2,3)
print(x)

print(x[3][0][2])