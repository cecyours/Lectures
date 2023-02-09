

x = -1 # global

def task():
    global x
    x = x+20 #local

task()
print(x)