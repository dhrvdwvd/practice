import n71_file1

# Visit n71_file1.py and note that there is a
# block of code that is enclosed in a __main__
# block.  When any python code is imported.
# It is immediately run when imported.  However,
# the code in __name__=="__main__" block is only 
# executed when the program is run itself.
# __name__ is n71_file1 which not __main__ for
# n70 file. This is done to check if a script 
# is run directly or is it imported.
 
n71_file1.greet("dhruv")