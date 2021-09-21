i = 0
for i in range(10):
    if(i==2): continue
    print(i)
    if(i==5):
        print("Bye!\n")
        break
else:
    print("This is from else of for loop.")
    
# Else is only executed on successful termination of loop.

i = 0
for i in range(10):
    print(i)
else:
    print("This is from else of for loop.")