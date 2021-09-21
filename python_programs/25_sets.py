a = {2,3,4,2,1}
# In a set, data is sorted and distinct.
print(type(a))
print(a)

# IMPORTANT: The following code will make an empty dictionary,
# not an empty set.
b = {}
print("\n")
print(type(b))

# To create an empty use:
c = set()
print(type(c))
print(c)
c.add(1)
c.add(2)
c.add(3)
c.add(3)
print(c)

# Lists/Dictionaries cannot be added to the set because their
# contents can be changed.  Tuples, however, can be added because
# like sets, tuples are also immutable.
#c.add([3,4,5]) # returns an unhashable error
c.add((3,4,5))
c.add((3,4,5)) # only added one time
print(c)
print(len(c)) # prints length of set

c.remove(1) # removes 1
#c.remove(5) # throws an error bcoz 5 not in c

c.pop() # removes an arbitrary element
print(c)

# Sets are unordered and unindexed (cannot be accessed by an index).
# Items in sets cannot be changed.  Some other methods.
#
# s.clear(): empties the set s
# s.union(s2): returns the updated set s that is now s union s2.
# s.intersection(s2): returns intersection

s = {1,2,4,5,3,2,1}
print("\n")
print(s)

#s.clear()  # empties the set.
s = s.union({5,6,7})
print(s)
s = s.intersection({5,6})
print(s)