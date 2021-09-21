class Employee:
    company = "Microsoft"
    def __init__(self, name, product):
        self.name = name
        self.product = product
    def getDetails(self):
        print(f"The name of {self.company} programmer is" + 
         f" {self.name} and product is {self.product}.")

dhruv = Employee("Dhruv", "Skype")
roshni = Employee("Roshni", "GitHub")
dhruv.getDetails()
roshni.getDetails()