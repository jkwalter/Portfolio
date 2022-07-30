import random

for i in range(0, 50, 1):
    number = random.randint(1000000, 9999999)
    number_copy = number
    printed = False
    while number_copy > 0:
        if number_copy % 10 == 7 and printed == False:
            print(number)
            printed = True
        number_copy = number_copy // 10
