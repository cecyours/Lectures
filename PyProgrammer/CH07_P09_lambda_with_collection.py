

from functools import reduce


data = [2,5,6,3,6]

sum = lambda x,y:x+y

ans = reduce(sum,data)

print(ans)


sum = lambda l:l[0] if len(l)==1 else l[0]+sum(l[1:]) 
print(sum(data))


x = [2,3,4,5,6,7,8,9,0]
 
even1 = map(lambda i: i if i%2==0 else False,x)
for i in even1:
    print(i,end=" ")

print()
even2 = filter(lambda i: i%2==0,x)

for i in even2:
    print(i,end= " ")

print()

# work for filter..
#  def evenList(list):
#     data = []
#     for i in list:
#         if i%2==0:
#             data.append(i)
    
#     return data

# new_data = evenList(x)
# print(new_data)