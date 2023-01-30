
data = {

'101':{
        "name":"Rupesh",
        "subject":"Python",
        "marks":99
    },
'102':{
        "name":"Rohan",
        "subject":"C#",
        "marks":35
    },
    
'103':{
        "name":"Piyu",
        "subject":"java",
        "marks":29
    },
    
'104':{
        "name":"kites",
        "subject":"C++",
        "marks":53
    },
    
'105':{
        "name":"Tokyo",
        "subject":"Python",
        "marks":38
    },
    
}

# print(data)

print("%4s | %10s | %8s | %s"%("SrNo","Name","Subject","marks"))

for i in data:
    # print(data[i])
    x = data[i]
    print("%4s + %10s + %8s + %s"%("----","---------","--------","------"))
    # print("%4s | %10s | %10s | %4.2f"%(i,x['name'],x['subject'],x['marks']))
    print("{:^4} | {:^10} | {:>8} | {:^4}".format(i,x['name'],x['subject'],x['marks']))
