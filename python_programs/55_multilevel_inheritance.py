class Person:
    name = "dhruv"
    def takeBreath(self):
        print("I am breathing...")
class Employee:
    company = "Jaguar"
    def getSalary(self):
        print(f"Salary is {self.salary}")
    def takeBreath(self):
        print("I am an employee so luckily I am also breathing...")
class Programmer(Employee):
    company = "Fiverr"
    def getSalary(self):
        print("No salary for .")
    def takeBreath(self):
        print("I am a programmer so I am breathing++")
p = Person()
e = Employee()
pr = Programmer()
print(pr.company)
p.takeBreath()
e.takeBreath()
pr.takeBreath() # inherited from nearest parent if not in self