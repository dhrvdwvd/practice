def percent(marks):
    return ((sum(marks))/100/len(marks))*100
    
def greet(name="Stranger"): # Default value parameter
    """This is a docstring.  The first comment enclosed in triple 
    quotes. This function just greets the user, nothing else."""
    print("Good day! "+name)

# sum, len, range are built-in function.
# above is how a function is defined.  Use functions when you want to reuse
# certain chunk of code every now and then.

marks = [67,77,87]
#percentage = ((marks[0]+marks[1]+marks[2])/300)*100
print(str(percent(marks)))

greet()
greet("Dhruv")
print(greet.__doc__)