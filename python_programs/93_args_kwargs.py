def func1(normalarg, *args1, **kwargs1):
    print(normalarg)
    for item in args1:
        print(item)
        
    for key,value in kwargs1.items():
        print("{} --> {}".format(key,value))
# *args1 is passed in the above function as a tuple.
# **kwargs1 is passed in the above function as a dictionary.
# kw stands for keywords.  When declaring a function, first
# normal arguments are passed, then *args are passed, then
# **kwargs are passed.  Note that using *args, **kwargs solves
# the need for passing as many arguments, one can maodify the
# *args tuples and **kwargs to have as many arguments as it can.
list1 = ["Jeera", "Nimbu", "Kaala Namak"]
dict1 = {'1':"One", '2':"Two", '3':"Three"}

func1("A normal argument.", *list1, **dict1)
# *args, **kwargs are totally optional.
func1("normalargument.")