class ComplexNos:

    def __init__(self, x, y):
        self.x = x
        self.y = y
        
    def __add__(self, c):
        print("Adding...")
        return ComplexNos(self.x+c.x, self.y+c.y)
        
    def __str__(self):
        return f"{self.x} + {self.y}j"

c1 = ComplexNos(12,55)
c2 = ComplexNos(11,65)
print(c1+c2)