import clrprint
import time

import random as r

colors = ["red","purple","white","blue","yellow","green","black"]
name = "memories"
i = 0
while True:
    if i==len(name):
        i = 0
    clrprint.clrprint(name[i],name[i+1],clr=r.choice(colors),sep=" ",end=" ")
    time.sleep(0.00001)
    i+=2