class Employee:
    salary = 100
    # def changeSalary(self, sal):
        # self.salary = sal
    # def changeSalary(self, sal):
        # self.__class__.salary = sal
    @classmethod
    def changeSalary(cls, sal):
        cls.salary = sal
e = Employee()
print(e.salary)
e.changeSalary(432)
print(e.salary)
print(Employee.salary)

# To change salary of class use self.__class__.salary in
# changeSalary() method.  The following method is bound to the class
# Another alternative is to create a class method as:
# @classmethod
# def changeSalary(cls, sal):
#   cls.salary = sal