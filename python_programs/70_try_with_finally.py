try:
    i = int(input("Enter a number: "))
    c = 1/i
except Exception as e:
    print(e)
    exit()
finally:
    print("Finally exiting the program.")
    
# finally is executed irrespective of what except says, that is
# even when exit() is called by except.