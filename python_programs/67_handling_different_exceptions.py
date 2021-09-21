try:
    a = int(input("enter a number: "))
    c = 1/a

except ValueError as e:
    print("Please enter a valid value.")
    
except ZeroDivisionError as e:
    print("Make sure you are not dividing by zero.")
    
except Exception as e:
    print("Exception occured.")
    print(e)
    
print("Thanks for using this code.")