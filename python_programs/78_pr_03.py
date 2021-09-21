num = int(input("Enter a number for which you desire a "+
"multiplication table: "))
l = [num*(i+1) for i in range(10)]
print(l)