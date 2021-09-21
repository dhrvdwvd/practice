class Employee:
    company = 'VISA'
    eCode = 123
class Freelancer:
    company = 'Fiverr'
    level = 0
    
    def upgradeLevel(self):
        self.level += 1
class Programmer(Employee, Freelancer):  # Here, for ambiguity resolution
    name = "Dhruv"                       # whichever comes first resolves
                                         # (Employee) here.

p = Programmer()
print(p.company)