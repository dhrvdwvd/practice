list1 = [2,1,3,4,22,45,12,89,33,77,42]
list2 = []
for item in list1:
    if item%2==0:
        list2.append(item)
print(list2)

# the above can be done also as:
# This is known as list comprehension, it can also be applied
# to sets, dictionaries.
list2 = [i for i in list1 if i%2==0]
list3 = [i for i in list1 if i>8]
print(list2)
print(list3)