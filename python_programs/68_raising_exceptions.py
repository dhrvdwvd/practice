def increment(num):
    try:
        return int(num) + 1
    except:
        raise ValueError("Make sure you are entering a valid value")

a = increment('a')
print(a)
print("Exiting the program.")