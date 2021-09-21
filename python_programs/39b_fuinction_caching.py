import time
from functools import lru_cache

@lru_cache(maxsize=3) # This decorator tells the python to cache 3 values
def some_func(n):
    # time.sleep(n) simulates time to do some calculations.
    time.sleep(n)
    return n

# Caching is used to store some values for later use.  For eg,
# some_fun(3) will run as defined for the first time, but when
# called again, it will use the value saved in the cache because
# python interpreter knows it did the calculation earlier.
# This caching is used extensively by web browsers to save load
# time.

# This will run more properly in a terminal.

if __name__ == "__main__":
    some_func(3)
    print("Called for the first time...")
    some_func(2)
    print("Calling again...")
    some_func(3)