number = int(input("Enter a positive number: "))
while number < 0:
    number = int(input("Enter a positive number: "))

if number == 0:
    print("0! = 1")
else:
    factorial = 1
    for i in range(number, 1, -1):
        factorial = factorial * i
    print(str(number) + "! = " + str(factorial))
