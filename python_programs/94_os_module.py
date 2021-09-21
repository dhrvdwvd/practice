import os
import inspect

# type is used to obtain type of a class.
# id: any python object is identified by a unique id (kind of address)
# dir is used to obtain all the methods/members of a Python
# object/module.

#print(dir(os))
#print(inspect.getmembers(os))

# inspect.getmembers() is used usually on a class/object.

# Current working directory
#print(os.getcwd())

# Change directory
#os.chdir("C://")
#print(os.getcwd())
#print(os.listdir())
#print(os.environ.get('Path'))
#print(os.path.join("C:/","/Users/dhruv/cpp_programs"))
#print(os.path.exists("C:/Users/dhruv/cpp_programs"))
#print(os.path.exists("C:/Users/dhruv/Documents/cpp_programs"))
print(os.path.isfile("C:/Users/dhruv/Documents/cpp_programs/first.cpp"))
print(os.path.isfile("C:/Users/dhruv/Documents/cpp_programs"))