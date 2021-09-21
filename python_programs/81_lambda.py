# Syntax: lambda arguments: expressions
func = lambda a: a+6
product = lambda a,b: a*b
add1 = lambda a,b,c: a+b+c

x = 3
print(func(x))          # 9
print(product(x,2))     # 6
print(add1(x,4,0))      # 7