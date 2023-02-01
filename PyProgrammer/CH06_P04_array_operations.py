import array as rupesh

x = rupesh.array('i',[10,20,30,40,50,60,70,80,90])

# accessing with indexing
print(x[5])

x.insert(3,77) # add at index
print(x)

x.append(40) # add at last
print(x)

x.remove(40)# delete
print(x)

try:
    f = x.index(41)
    print(x,f,sep='_')
except:
    print("Error not found...")
# print("Hiii")

x[2] = 300 #update
print(x)