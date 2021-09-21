# methods with two underscores at the beginning and end
# are known as dunder methods.
class Number:
    def __init__(self, num):
        self.num = num
    def __add__(self, num2):
        print("Adding...")
        return self.num + num2.num
    def __mul__(self, num2):
        print("Multiplying...")
        return self.num * num2.num
n1 = Number(4)
n2 = Number(3)
print(n1+n2) # Here + operator calls for special method __add__
print(n1*n2) # here * operator calls for __mul__ method
# __add__ and __mul__ are defined in Python docs and are given by it
# __truediv__ --> /
# __floordiv__ --> //
# __sub__ --> -