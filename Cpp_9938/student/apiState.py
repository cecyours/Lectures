import requests
import json

# "http://www.postalpincode.in/api/pincode/
# pincode = 382405
http1 = "http://www.postalpincode.in/api/pincode/"

filename = "/home/me/Lectures/Cpp_9938/student/apiState.json"

# x = None
# f = open("hell.txt","a+")
for j in range(110001,110003):
    pincode = str(j)
    try:
        print("\n");
        url = requests.get(http1+pincode)
        mydata = url.json()
        for i in (mydata["PostOffice"]):
            # print(j,i)
            dictionary = {j:i}
 
            with open(filename, "w") as outfile:
              json.dump(dictionary, outfile,indent=4)

    except:
          print("Something else went wrong ",j)

# print(x)

# with open(filename, "a") as outfile:
#     json.dump(dictionary, outfile,indent=4)
            




# Python program to write JSON
# to a file
 
 
# import json
 

# filename ="/home/me/Lectures/Cpp_9938/student/apiState.json"
# # Data to be written
# dictionary ={
#     "Message":"Number of Post office(s) found: 1",
#     "Status":"Success",
#     "PostOffice":
#     [
#         {
#             "Name":"Vatva",
#             "Description":"",
#             "BranchType":"Sub Post Office",
#             "DeliveryStatus":"Delivery",
#             "Taluk":"Daskroi",
#             "Circle":"Daskroi",
#             "District":"Ahmedabad",
#             "Division":"Ahmedabad City",
#             "Region":"Ahmedabad HQ",
#             "State":"Gujarat",
#             "Country":"India"
#         }
#     ]
# }
 
# with open(filename, "w") as outfile:
#     json.dump(dictionary, outfile)

























# data = {

# '101':{
#         "name":"Rupesh",
#         "subject":"Python",
#         "marks":99
#     },
# '102':{
#         "name":"Rohan",
#         "subject":"C#",
#         "marks":35
#     },
    
# '103':{
#         "name":"Piyu",
#         "subject":"java",
#         "marks":29
#     },
    
# '104':{
#         "name":"kites",
#         "subject":"C++",
#         "marks":53
#     },
    
# '105':{
#         "name":"Tokyo",
#         "subject":"Python",
#         "marks":38
#     },
    
# }

# # print(data)

# print("%4s | %10s | %8s | %s"%("SrNo","Name","Subject","marks"))

# for i in data:
#     # print(data[i])
#     x = data[i]
#     print("%4s + %10s + %8s + %s"%("----","---------","--------","------"))
#     # print("%4s | %10s | %10s | %4.2f"%(i,x['name'],x['subject'],x['marks']))
#     print("{:^4} | {:^10} | {:>8} | {:^4}".format(i,x['name'],x['subject'],x['marks']))