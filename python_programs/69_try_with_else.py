try:
    i = int(input("Enter a number: "))
    c = 1/i
except Exception as e:
    print(e)
else:
    print("Successful.")
    
# else is only executed when no error is encountered.