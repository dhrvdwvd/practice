# List methods:
# listname.sort(): sorts/updates the list.
# listname.reverse(): reverses and updates the list.
# listname.append(element): adds element to the end of the list.
# listname.insert(index, element): adds element at index of list
# listname.pop(index): deletes element at index and returns the
#                        value at that index.
# listname.remove(element): removes element from the list

l1 = [1,8,7,2,15,41]
print(l1)
l1.sort() # updates l1 as well
#l1_sorted = l1.sort() # returns None
print(l1)
#l1.reverse()
#l1.append(55)
l1.insert(3,9)
print("\n")
print(l1)
l1.remove(41)
print(l1)
