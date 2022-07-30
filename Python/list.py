import random

mylist = []
mylist_sum = 0
mylist_max = 0
mylist_min = 10
mylist_mode = 0
mylist_count = [0, 0, 0, 0, 0, 0]

for i in range(0, 10, 1):
    x = random.randint(1, 5)
    mylist.append(x)

print(mylist)

for element in mylist:
    mylist_sum = mylist_sum + element
    if element > mylist_max:
        mylist_max = element
    if element < mylist_min:
        mylist_min = element
    mylist_count[element] = mylist_count[element] + 1

mylist_mean = mylist_sum / 10
mylist_range = mylist_max - mylist_min

for i in range(0, 6, 1):
    if mylist_count[i] > mylist_count[mylist_mode]:
        mylist_mode = i


print("       Sum: " + str(mylist_sum))
print("   Maximum: " + str(mylist_max))
print("   Minimum: " + str(mylist_min))
print("      Mean: " + str(mylist_mean))
print("      Mode: " + str(mylist_mode))
print("Mode Count: " + str(mylist_count[mylist_mode]))
print("     Range: " + str(mylist_range))

mylist_copy = mylist.copy()

for i in range(1, 10, 1):
   for j in range(0, 10 - i, 1):
        if mylist_copy[j+1] < mylist_copy[j]:
            mylist_swap = mylist_copy[j]
            mylist_copy[j] = mylist_copy[j+1]
            mylist_copy[j+1] = mylist_swap

print(mylist_copy)
print(mylist)

mylist.sort()
print(mylist)
mylist.reverse()
print(mylist)
