def greet(name):
    print(f"Good Morning, {name}")

print(__name__)

if __name__ == "__main__": # True when called from the same program.
    name = input("Enter your name: ")
    greet(name)