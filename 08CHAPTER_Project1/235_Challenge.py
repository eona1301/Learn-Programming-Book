import turtle
import random

t1 = turtle.Turtle()
t1.color('pink')
t1.shape('turtle')
t1.pensize(5)
t1.speed(1)
t1.up()
t1.goto(-400, 100)

t2 = turtle.Turtle()
t2.color('blue')
t2.shape('turtle')
t2.pensize(5)
t2.speed(1)
t2.up()
t2.goto(-400, 0)

t3 = turtle.Turtle()
t3.color('green')
t3.shape('turtle')
t3.pensize(5)
t3.speed(1)
t3.up()
t3.goto(-400, -100)

t1.down()
t2.down()
t3.down()

for i in range(50) :
    length1 = random.randint(1, 60)
    t1.forward(length1)
    length2 = random.randint(1, 60)
    t2.forward(length2)
    length3 = random.randint(1, 60)
    t3.forward(length3)

turtle.done()