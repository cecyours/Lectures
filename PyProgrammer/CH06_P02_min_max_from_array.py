import array

a = array.array('i',[12,34,57,99,87,65,43,2])
b = array.array('i',[13,14,75,93,27,65,90,1])


def max(x):
    max = x[0]
    for i in x:
        if max<i:
            max = i

    return max


def min(x):
    min = x[0]

    for i in x:
        if min>i:
            min = i
    return min

i = max(a)
j = min(a)

print(a,i)
print(a,j)

