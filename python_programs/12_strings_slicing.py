greeting = "Hello, "
name = "DhruvisGood"
#print(greeting + name)
#print(name[0])
#name[3] = 'd'  --> does not work
# String can be accessed but not changed.
print(name[0:3]) # is same as below
print(name[:3])

print(name[1:]) # will print from index 1 to last index

print(name[1:8:2]) # will start printing index 1, 1+2, 5, 7 ...