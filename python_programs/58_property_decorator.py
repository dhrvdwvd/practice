class Employee:
    company = "Bharat Gas"
    salary = 2342
    salary_bonus = 48
    # total_salary
    
    @property # Looks like a function but it is an attr.
    def totalSalary(self):
        return self.salary+self.salary_bonus
    
    @totalSalary.setter
    def totalSalary(self, val):
        self.salary_bonus = val - self.salary
        

e = Employee()
print(e.totalSalary)
e.salary_bonus=68
print(e.totalSalary)
e.totalSalary = 2500
print(e.salary_bonus)

# The method with @property decorator is called getter.
# We can also set the property and then use a setter decorator
# to evaluate other attributes.