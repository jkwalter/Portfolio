import turtle

window = turtle.Screen()
window.title("Pong")
window.bgcolor("black")
window.setup(width=800, height=600)
window.cv._rootwindow.resizable(False, False)
window.tracer(0)

#Paddle 1
Paddle1 = turtle.Turtle()
Paddle1.speed(0)
Paddle1.shape("square")
Paddle1.color("white")
Paddle1.shapesize(stretch_wid=5, stretch_len=1)
Paddle1.penup()
Paddle1.goto(-350, 0)

#Paddle 2
Paddle2 = turtle.Turtle()
Paddle2.speed(0)
Paddle2.shape("square")
Paddle2.color("white")
Paddle2.shapesize(stretch_wid=5, stretch_len=1)
Paddle2.penup()
Paddle2.goto(350, 0)

#Ball
Ball = turtle.Turtle()
Ball.speed(0)
Ball.shape("square")
Ball.color("white")
Ball.penup()
Ball.goto(0, 0)
Ball.dx = 0.1
Ball.dy = 0.1

#Score
Score1 = 0
Score2 = 0
Pen = turtle.Turtle()
Pen.speed(0)
Pen.color("white")
Pen.penup()
Pen.hideturtle()
Pen.goto(0, 260)
Pen.write("Player 1: {}  Player 2: {}".format(Score1, Score2), align="center", font=("Courier", 24, "normal"))

#Paddle Movement
def Paddle1_Up():
    y = Paddle1.ycor()
    y = y + 20
    if y > 240:
        y = 240
    Paddle1.sety(y)

def Paddle1_Down():
    y = Paddle1.ycor()
    y = y - 20
    if y < -240:
        y = -240
    Paddle1.sety(y)

def Paddle2_Up():
    y = Paddle2.ycor()
    y = y + 20
    if y > 240:
        y = 240
    Paddle2.sety(y)

def Paddle2_Down():
    y = Paddle2.ycor()
    y = y - 20
    if y < -240:
        y = -240
    Paddle2.sety(y)

window.listen()
window.onkeypress(Paddle1_Up, "w")
window.onkeypress(Paddle1_Down, "s")
window.onkeypress(Paddle2_Up, "Up")
window.onkeypress(Paddle2_Down, "Down")

while True:
    window.update()

    #Ball Movement
    Ball.setx(Ball.xcor() + Ball.dx)
    Ball.sety(Ball.ycor() + Ball.dy)

    #Border Checking for Ball
    if Ball.ycor() > 290:
        Ball.sety(290)
        Ball.dy = Ball.dy * -1

    if Ball.ycor() < -290:
        Ball.sety(-290)
        Ball.dy = Ball.dy * -1

    if Ball.xcor() > 390:
        Ball.goto(0, 0)
        Ball.dx = Ball.dx * -1
        Score1 = Score1 + 1
        Pen.clear()
        Pen.write("Player 1: {}  Player 2: {}".format(Score1, Score2), align="center", font=("Courier", 24, "normal"))

    if Ball.xcor() < -390:
        Ball.goto(0, 0)
        Ball.dx = Ball.dx * -1
        Score2 = Score2 + 1
        Pen.clear()
        Pen.write("Player 1: {}  Player 2: {}".format(Score1, Score2), align="center", font=("Courier", 24, "normal"))

    #Ball Hits Paddle
    if (Ball.xcor() > 340 and Ball.xcor() < 350) and (Ball.ycor() < Paddle2.ycor() + 50 and Ball.ycor() > Paddle2.ycor() - 50):
        Ball.setx(340)
        Ball.dx = Ball.dx * -1

    if (Ball.xcor() < -340 and Ball.xcor() > -350) and (Ball.ycor() < Paddle1.ycor() + 50 and Ball.ycor() > Paddle1.ycor() - 50):
        Ball.setx(-340)
        Ball.dx = Ball.dx * -1
