from functools import reduce
list1 = [90,88,45,65,123]
maximum_val = reduce(max, list1)
print(maximum_val)