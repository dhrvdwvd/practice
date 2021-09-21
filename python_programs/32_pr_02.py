alist = []
marks = int(input("Enter marks for subject 1: "))
print("Marks entered:", marks)
alist.append(marks)
sum1 = marks
marks = int(input("Enter marks for subject 2: "))
print("Marks entered:", marks)
alist.append(marks)
sum1+=marks
marks = int(input("Enter marks for subject 3: "))
print("Marks entered:", marks)
alist.append(marks)
sum1+=marks
print("Total marks obtained; "+str(sum1))
sum1 = sum1/3
print("Marks in each subject:",alist)
if((alist[0]>33) and (alist[1]>33) and (alist[2]>33) and (sum1>40)):
    print("Yay!  The student passed.")
else:
    print("Alas!  The student failed.")
