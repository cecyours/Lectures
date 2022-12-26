
import turtle

win = turtle.Screen();
win.bgcolor("blue")

pen = turtle.Turtle();

pen.shape("arrow")

# pen.forward(100)
# pen.right(120)
# pen.forward(100)
# pen.right(120)
# pen.forward(100)
# pen.right(120)
# pen.forward(100)
# pen.right(100)
# pen.forward(49)
import random as r
for i in range(1,1000):
	pen.left(i+49)
	if i%5==0:
		pen.up();
	if i%3==0:
		pen.down();
	pen.forward(100+i)
	pen.color(r.choice(["red","green","white","pink"]))
input()
