# Inheritance occurs when a new class is created by inheriting
# attributes from a existing class.  The new class can have it's
# own attributes/methods.
class Employee:
    company = "Google"
    def getDetails(self):
        print("This is an employee")
class Programmer(Employee):
    language = "Python"
    def getLanguage(self):
        print(f"The language used is: {self.language}")
    def getDetails(self):
        print("This is a programmer.")
e = Employee()
p = Programmer()
print(p.language)
e.getDetails()
p.getDetails()
print(p.company)