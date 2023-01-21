data = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']


num = "5"

def increment(x):
    index = list.index(data,x)
#     # print("index : ",index)
    if(index==len(data)-1):
        return data[0]
    return data[index+1]

def display_next(num):
    org = num
    #increment
    if num[-1] =='Z':
        previous = '0'
        for i in range(len(num)-2,-1,-1):
            if previous == '0':
                x = increment(num[i])
                num = num[:i]+x+num[i+1:]
            # if(num[:i+1].lstrip('0')=='' and org[i]==''):
                # break
            previous = num[i]
            
            # print(num[i])
    if(num[0]=='Z' and num[1:].lstrip('0')==''):
        num = "1"+num;
    x = increment(num[-1])
    num = num[:-1]+x;

    new = (num.zfill(6))
    return num





num = "0"
# for i in range(100000):
#     num = display_next(num)

# test_list = ['012', '03000', '044', '09']
 
# printing original list
# print("The original list is : " + str(test_list))
# res = [ele.lstrip('0') for ele in test_list]
# print(res)
for  i1 in data:
    for i2 in data:
        for i3 in data:
            for i4 in data:
                for i5 in data:
                    for i6 in data:
                        old = i1+i2+i3+i4+i5+i6
                        num = display_next(num)
                        print(num.zfill(6),old)
