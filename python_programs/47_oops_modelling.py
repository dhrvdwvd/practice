###########################################################
# To model a problem in OOPs, identify the following:     #
#                                                         #
#    Noun       --> Class       --> (Employee)            #
#    Adjective  --> Attributes  --> (name,age,salary)     #
#    Verbs      --> Methods     --> (getSalary, increment)#
###########################################################

# a normal variable/attribute name is public, while an
# underscore at the beginning means protected aceess, 
# (protected means classes that derive from it can use it,
# and the program itself can use it, not usable when imported.)
# two underscores at the beginning mean that variable is for
# private use of the class only.

class Number: # class names are written in PascalCase
    def sum1(self):  # methods are written in camelCase
        return self.a+self.b

num = Number()  # creates an instance of class Number
num.a = 12
num.b = 908
print(num.sum1())

###########################################################

class Player1:
    def moveUp(self):
        pass
    def moveDown(self):
        pass
    def moveLeft(self):
        pass
    def moveRight(self):
        pass

class Remote1:
    def isLeftPressed(self):
        pass
        
remote1 = Remote1()
player1 = Player1()

if(remote1.isLeftPressed()):
    player1.moveLeft()

