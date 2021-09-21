a = int(input('Enter the numerator: '))
b = int(input('Enter the denominator: '))
print("Evaluating a/b...")
print("a/b is ", end="")
try:
    print(a/b)
except ZeroDivisionError:
    print('Infinite')
except Exception as e:
    print(e)
    
print("Done!")