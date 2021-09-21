i = 0
while(i<10):
    print("Yes "+str(i))
    i = i+1
    
lst = ['A', 'B', 'D', 'F', 'E']
print(str(lst))
# Lists, tuples, strings are iterables, and in can be used to
# iterate over them one by one as below:
for item in lst:
    print(str(item))

for char in "Hello":
    print(char)
    
# Range function can be used to create a sequence of numbers:
# range(n) generates 0, 1, 2, ..., n
# range(m,n) generates m, m+1, ..., n
# range(m, n, d) generates: m, m+d, m+2d, ..., n
for i in range(8):
    print(i)

for i in range(1,7):
    print(i)

for i in range(0,8,3):
    print(i)