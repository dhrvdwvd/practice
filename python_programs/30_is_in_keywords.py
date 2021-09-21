# the 'is' keyword:
a = None
if(a is None): # 'is' is used to check if two objects point to same object
    print("Yes, a is None.")
else:
    print("No, a is not None.")

# The 'in' keyword:
a = [1, 5, 53]
print(5 in a)
print(12 in a)
# in has primarily two uses:
# first, to check if an item is in a list, as shown above
# second, to iterate over a list in a for loop.