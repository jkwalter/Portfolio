import random

mylist = []

n = int(input("Enter a number: "))

for i in range(0, n, 1):
    mylist.append(random.randint(0, n))

print("Sorting " + str(n) + " numbers.")

for i in range(1, n, 1):
    for j in range(0, n - i, 1):
        if mylist[j] > mylist[j+1]:
            swap = mylist[j+1]
            mylist[j+1] = mylist[j]
            mylist[j] = swap

print("List sorted.")
