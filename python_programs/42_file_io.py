# Python has a built-in function open() for opening a file.
f = open('sample.txt', 'r') # default mode='r'
data = f.read()
print(type(data))
print(data)

list_of_lines = data.split('\n')
print(list_of_lines)

# Reads only 5 characters.
#data = f.read(5)
f.close()