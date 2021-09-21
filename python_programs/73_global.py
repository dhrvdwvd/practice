a = 54.7 # global variable
def var():
    # global a  # use this to access the global variable
    a = 7 # local variable if global keyword not present
    print(a)
    
var()
print(a)