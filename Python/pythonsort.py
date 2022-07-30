import random

mylist = []

n = int(input("Enter a number: "))

for i in range(0, n, 1):
    mylist.append(random.randint(1, n))

print("Sorting " + str(n) + " numbers.")

mylist.sort()

print("List sorted.")
