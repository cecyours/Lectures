
a = [[1,3],[2,1],[7,4],[2,4]]
sorted_data= sorted(a, key=lambda k: (k[1],k[0]))

print(sorted_data)