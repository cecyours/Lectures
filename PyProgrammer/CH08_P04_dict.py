import names 
import random as r

data = dict()
subject = ["python","java","C++","php","html","C","js"]

for i in range(100):
    name = names.get_full_name()
    sub = r.choice(subject)
    marks = r.randint(300,500)
    
    node = {"name":name,"subject":sub,"marks":marks}
    data[str(i)] = node

for i in data:
    if(data[i]["marks"]>490):
        print(i,data[i])


# product dict

list = ["productId","productName","productPrice"]
x = dict.fromkeys(list)
x["productName"] = "Rupesh"
print(x)


print(x.get("name"))

print(data['34'].items())

print("----------------")

x.setdefault("date",'1-Apr-2023')
print(x)

print("------------")
print(x.keys())
print(x.values())