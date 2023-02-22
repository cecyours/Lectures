

data1 = [1,2,3,4,5,6,7,8,9,0]

data2 = data1 # copy
data3 = data1[::] # clone

data1[4] = 99

print(data1)
print(data2)
print(data3)