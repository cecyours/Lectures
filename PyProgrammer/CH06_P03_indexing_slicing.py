
import array as me

a = me.array('i',[12,3,4,5,6,7,8,900,98,76,5,4,32,1])

# indexing
print(a)
print(a[3]) # 5
print(a[-1]) #1
print(a[-5]) #76


print("----------------")
print(a,a[3:])
print(a,a[3:6])
print(a,a[::-1])
print(a,a[::2])

