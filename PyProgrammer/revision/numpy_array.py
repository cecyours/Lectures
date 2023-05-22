import numpy as np

# arr = np.array([1,2,3,4])
# print(arr)

# 2d array

# arr1 = np.array([[1,2,3],[4,5,6]])
# print(arr1)

# 3d array
            #   |        0       | |       1          |
arr2 = np.array([[[1,2,3],[4,5,6]],[[7,8,9],[10,11,12]]])
                 # 0 1 2   0 1 2 ||  0 1 2    0  1  2
                 #   0       1   ||    0         1
print(arr2[1,1,2])

var = int(input("Enter a number= "))
if var % 2:
    print("odd")
else:
    print("even")