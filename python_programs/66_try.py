while(True):
    print("Press q to quit")
    a = input("Enter a number: ")
    if(a == 'q'): break
    try:
        a = int(a)
        if(a>6): print("Entered number is greater than 6.")
    except Exception as e:
        print(e) # This breaks the loop as well.
    
print("Thanks for playing the game.")
# The try-except do not let the programs to crash when an error
# occurs, this is useful when making GUI applications.