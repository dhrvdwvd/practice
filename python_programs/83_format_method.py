# f strings were introduced with a later version of python
# it is important to learn format method because some
# open source softwares still do not use f strings and
# hence use only format methods.
name = "dhruv"
age = 24
employed = False
print("My name is {} and I am {} years old".format(name, age))
print("Hi!  This is {2} and I am {1} years old, am I employed? {0}.".format(employed,age,name))
# In the above statement, employed is indexed 0, age is 1, and name is 2