
# pip install clrprint
# 
import clrprint as clr
import random
import time

clr.clrprint("Hello",clr="red")

# get supported colors

print(clr.clrhelp())
data = ["red","green","blue","yellow","purple","magenta","black"]

for i in data:
    clr.clrprint("Hello RUPESH",clr=i)

for j in range(1010):
    clr.clrprint("\u0972",clr=random.choice(data),end=" ")
    time.sleep(0.001)


# https://www.rapidtables.com/code/text/unicode-characters.html