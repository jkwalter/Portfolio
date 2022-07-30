def binary(number):
    if number > 0:
        binary(number // 2)
        print(number % 2, end="")

number = int(input("Enter a number: "))
print("Binary conversion of " + str(number) + ": ", end="")
if number == 0:
    print(number)
elif number < 0:
    print("-", end="")
    binary(abs(number))
    print("")
else:
    binary(number)
    print("")

