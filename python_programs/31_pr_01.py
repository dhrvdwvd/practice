alist = []
num = int(input("Enter a number: "))
alist.append(num)
num = int(input("Enter a number: "))
alist.append(num)
num = int(input("Enter a number: "))
alist.append(num)
num = int(input("Enter a number: "))
alist.append(num)

if (alist[0]>alist[-1]):
    f1 = alist[0]
else:
    f1 = alist[-1]

if(alist[1]>alist[2]):
    f2 = alist[1]
else:
    f2 = alist[2]

print(alist)
if(f1>f2):
    print(str(f1)+" is greatest in above list")
else:
    print(str(f2)+" is greatest in above list")