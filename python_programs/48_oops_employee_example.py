class Employee:
    _protected = 90
    __private_attr = 100
    company = "Google"
    salary = 100

dhruv = Employee()
ram = Employee()
print(dhruv.company)
# Class attribute can be changed directly.
Employee.company = "YouTube"
print(dhruv.company)

# Instance attributes can be changed, this takes precedence over class attrs.
dhruv.salary = 300
#ram.salary = 400
print(dhruv.salary)
print(ram.salary)
# print(dhruv.address) # we haven't set this as neither any class 
                     # attr or object attr
# Protected variables can be accessed when run by this script:
print(dhruv._protected)

# To access private attrs we have to overcome name handling done
# by Python:
print(dhruv._Employee__private_attr)