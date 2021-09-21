from datetime import date, timedelta
class Book:
    name=None
    code=None
    issued_to=None
    issued_on=None
    return_date=None
    fines=None
    
    def __init__(self):
        print("\nInitializing a book...")
        print("Enter details for a book:")
        self.name=input("Title: ")
        self.code=input("Accession Number: ")
        
    def issueIt(self,roll_no,current_date=date.today()):
        print("Processing...")
        if(issued_to == None):
            print("This book is available for rent.")
            print("Issuing...")
            print("Done!  This book has been issued by you.")
            self.issued_to = roll_no
            self.issued_on = current_date
            self.return_date = current_date+timedelta(days=14)
            self.fines = 0
        else:
            print("Sorry!  This book is not available for rent.")
            print("Wait for "+str(self.return_date-date.today())[:7]+".")
            
    def returnIn(self):
        days_left=int(str(self.return_date-date.today())[:2])
        if(days_left>0):
            return days_left
        else:
            print("You are "+str(-(days_left))+" days(s) late in returning the book.")
            return days_left
            
    def returnIt(self):
        print("Retreiving information...")
        print("This book was issued to: {} on {}.".format(self.issued_to,self.issued_on))
        print("Return date for this book: {}".format(self.return_date))
        if(self.returnIn()<0):
            print("You are "+str(-self.returnIn())+" days late.")
            self.fine = float(-self.returnIn())*0.50
            print("You must pay a fine of "+str(self.fine)+" rupees.")
        else:
            print("No fines!")
        print("Book successfully returned!")
        book.issued_to=None
        book.issued_on=None
        book.return_date=None
        book.fines=None
        
    def __str__(self):
        print('Book Title: '+self.name+'\nAccession Number: '+self.code)
        print("Issued: "+str(self.issued_to!=None))

class Library:
    catalogue=[]
    number_of_books=None

    def __init__(self, n):
        print("This will initialize the catalogue, follow along:")
        self.number_of_books=n
        for i in range(n):
            self.catalogue.append(Book())
            
    def currentStatus(self):
        print("\nAcc. No.\t\tIssued\tTitle of the book")
        print("="*50)
        for i in range(self.number_of_books):
            print(self.catalogue[i].code+"\t\t"+str(self.catalogue[i].issued_on!=None)
            +"\t\t"+self.catalogue[i].name)

    def displayMenu(self):
        print("")
            
lib1 = Library(2)
lib1.currentStatus()
