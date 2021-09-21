# Lists are containers that can store lot of values of any
# any data type.
a = [1,2,34,565,778,1231]
print(a)

# To access first element (index 0):
print(a[0])

# Elements can be changed.
a[0] = 33
print(a)
# Accessing index 6 will return an error as maximum index
# in the list a is 5.
#print(a[6])

# List of items of different types:
b = [1, 1.2, 'a', True]
print(b)

# List slicing:
print("\nIndex 0 to index 2 of list a are accessed by a[0:3] as shown\n", a[0:3])