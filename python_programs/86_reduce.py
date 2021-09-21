from functools import reduce
# reduce applies a rolling computation to sequential pair of
# elements.

prdct = lambda a,b: a*b

list1 = [1,3,2,4]

val = reduce(prdct, list1)
# How sequential computation occurs for prdct:
# 1 3 2 4 --> product of 1,3
#  3  2 4 --> product of 3,2
#    6  4 --> product of 6,4
#     24
print(val)