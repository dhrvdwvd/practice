class Number:
    def __init__(self, num):
        self.num = num
    def __add__(self, num2):
        print("Adding...")
        return self.num + num2.num
    def __mul__(self, num2):
        print("Multiplying...")
        return self.num * num2.num
    def __str__(self):
        return f"Decimal number: {self.num}"
    def __len__(self):
        return 1
n = Number(4.2)
print(n)
# __str__ is executed when object is directly printed.
print(len(n))