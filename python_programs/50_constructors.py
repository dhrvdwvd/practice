# __init()__ is a special method which is run first when the
# object is created.  This is also known as constructor.
# It takes self argument and can take more arguments.

class Employee:
    company = "Google"
    def __init__(self,name,salary):
        print("Employee is created.")
        self.name = name
        self.salary = salary
    def getSalary(self):
        print(f"Salary from {self.company}: {self.salary}")
    @staticmethod
    def greet():
        print("Good day!")

dhruv = Employee("Dhruv", 100)
print(dhruv.name)
print(dhruv.salary)