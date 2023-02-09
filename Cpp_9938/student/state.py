import requests
import json

# "http://www.postalpincode.in/api/pincode/
# pincode = 382405
# http1 = "https://raw.githubusercontent.com/dr5hn/countries-states-cities-database/master/countries%2Bstates%2Bcities.json"

http1= "https://github.com/cecyours/Lectures/blob/main/state_district.json"

# filename = "/home/me/Lectures/Cpp_9938/student/apiState.json"

# x = None
# f = open("hell.txt","a+")
# for j in range(110001,110003):
#     pincode = str(j)
#     try:
        # print("\n");
url = requests.get(http1)
mydata = url.json()
for i in (mydata):
    # if i["name"]=="India":
            print(i)
            # dictionary = i
            # with open(filename, "a") as outfile:
            #     json.dump(dictionary, outfile,indent=4)

# except:
    #   print("Something else went wrong ",j)
