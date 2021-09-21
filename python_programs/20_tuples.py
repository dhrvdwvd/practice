# Creating a tuple using ()
t = (1,3,5,2,543,23, 3,23, 4,23,23)
t1 = () # Empty tuple
t2 = (1) # NOT a tuple but an int.
t3 = (1,) # Tuple with one element

# Printing tuple values:
print(t[2])

# Cannot update the values of the tuple1
#t[2] = 99 # Returns an error

# Methods.
# To count occurence of 23 in t:
print("23 occurs",t.count(23),"times in t")

# To search for a value in a tuple:
print("Firt occurence of 23 at index",t.index(23))