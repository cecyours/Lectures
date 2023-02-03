# import requests
# import json


# http1 = "https://github.com/sab99r/Indian-States-And-Districts/blob/master/states-and-districts.json"

# # filename = "/home/me/Lectures/Cpp_9938/student/state_district.json"

# url = requests.get(http1)
# mydata = url.json()
# for i in (mydata):
#     # if i["name"]=="India":

#             print(i)
#             # dictionary = i
#             # with open(filename, "a") as outfile:
#             #     json.dump(dictionary, outfile,indent=4)


import requests
import json
# response_API = requests.get("https://raw.githubusercontent.com/dr5hn/countries-states-cities-database/master/countries%2Bstates%2Bcities.json")
response_API = requests.get("https://cecyours.org/api/hell.json")
# response_API = requests.get("https://github.com/cecyours/Lectures/blob/main/state_district.json")

print(response_API.json())
data = response_API.text
parse_json = json.loads(data)
