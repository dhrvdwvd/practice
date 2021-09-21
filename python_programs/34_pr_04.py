names = ["dhruv", "ratnesh", "abhinav", "jaskaran"]
name = input("Enter a name to search: ")

if name in names:
    print(name+" is present in the list.")
else:
    print("Name entered is not in the list.")