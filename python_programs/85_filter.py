# filter method returns a list of items for which a function
# returns True.  An example follows:

def greater_than_5(num):
    if(num>5): return True
    else: return False

g10 = lambda num: num>10
list1 = [23,1,6,16,4,19]
print(filter(greater_than_5, list1))
# Typecasting the above filter object into a list
print(list(filter(greater_than_5,list1)))
print(list(filter(g10,list1)))