from abc import ABCMeta, abstractmethod

class Shape(metaclass=ABCMeta):

# @abstractclassmethod: This method is something all the derived
# classes should have.  Comment printArea in Rectangle and see
# the error.  This is how some methods are enforced in the derived
# classes.

    @abstractmethod
    def printArea(self):
        return 0
        
class Rectangle(Shape):
    type="Rectangle"
    sides=4
    
    def __init__(self): 
        self.length = 7
        self.breadth = 6

    def printArea(self):
        return self.length * self.breadth
        
if __name__ == "__main__":
    rect1 = Rectangle()
    print(rect1.printArea())