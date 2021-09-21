class Person:
    name = "dhruv"
    def __init__(self):
        print("Initializing person...\n")
    def takeBreath(self):
        print("I am breathing...")
class Employee(Person):
    company = "Jaguar"
    def __init__(self):
        super().__init__()
        print("Initializing employee...\n")
    def getSalary(self):
        print(f"Salary is {self.salary}")
    def takeBreath(self):
        super().takeBreath()
        print("I am an employee so luckily I am also breathing...")
class Programmer(Employee):
    company = "Fiverr"
    def __init__(self):
        print("Initializing programmer...\n")
    def getSalary(self):
        print("No salary for .")
    def takeBreath(self):
        super().takeBreath() # runs takeBreath of parent (Employee)
        print("I am a programmer so I am breathing++")
p = Person()
e = Employee()
pr = Programmer()
p.takeBreath()
e.takeBreath()
pr.takeBreath()