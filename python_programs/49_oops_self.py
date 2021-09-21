class Employee:
    company = "Google"
    def getSalary(self):
        print(f"Salary for working in {self.company}: {self.salary}")
    
    @staticmethod
    def greet(): # No need for a self argument now.
        print('Good afternoon, Sir')

dhruv = Employee()
dhruv.salary = 100000
dhruv.getSalary() # Employee.getSalary(dhruv)
# this and the above code are same.
# If self is removed, program will give an error because
# dhruv.getSalary() means Employee.getSalary(dhruv).  We defined
# Employee.getSalary() to take 0 arguments, a self is added to
# refer to the correct object.

# To convert dhruv.greet() into Employee.greet(), staticmethod
# declaration is useful as shown above.
dhruv.greet()