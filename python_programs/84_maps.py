# Map applies the function to all the items in a list.
# Syntax: map(function, input_list)

def square(num):
    return num*num

# Method 1
list1 = [32,55,74]
list2 = [square(i) for i in list1]
print(list2)

# Method 2
print(map(square, list1))
# Typecasting the above map object in list:
print(list(map(square, list1)))