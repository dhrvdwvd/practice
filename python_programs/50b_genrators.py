"""
Iterables are those objects for which __iter__() and __getitem__()
methods are defined.  These methods are used to generate an iterator.

Iterators are those objects for __next__() method is defined.

Iterations are process through which the above are accessed.

If I wish to traverse in a python object (string, list, tuple) moving
from one element to other, then that object should be an iterable.

If an object is iterable, then it generates an iterator through 
__iter__(). The iterator obtained uses __next__() method to provide
items in the iterable.

Generators are iterators.  These iterators can only be traversed once at
a time
"""

# To obtain a generator, yield keyword is used.  yield gives a generator
# object:
def gen(n):
    for i in range(n):
        yield 10*i

def fib_nth_term(n):
    if(n==1 or n==2):
        return 1
    else:
        return fib_nth_term(n-1)+fib_nth_term(n-2)


def fib_gen(n):
    for i in range(1,n):
        yield fib_nth_term(i)
            
    
print(gen(2))
for i in range(8):
    print(i)
    
# The above for loop generates values 'on the fly'.  It does not store
# all the values from 0 to 77 in RAM, but it generates them one by one.
# So, range is a generator.

for i in gen(4):
    print(i)

g = gen(5)    
print("Printing using __next__()")
print("g(0): {}".format(g.__next__()))
print("g(1): {}".format(g.__next__()))
print("g(2): {}".format(g.__next__()))
print("g(3): {}".format(g.__next__()))
print("g(4): {}".format(g.__next__()))

print("\nGenerating fibonnaci series through a generator:")
for i in fib_gen(8):
    print(i)