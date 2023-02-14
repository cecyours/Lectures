
import numpy as np


a = np.array([]);


n  = int(input("Enter the number  as size : "))
 
for i in range(n):
    x = int(input("Enter the element : "))
    a = np.insert(a,i,int(x))



for i in a:
    d = str(int(i))
    d = d[::-1]
    print(int(i),d,int(i)==int(d))