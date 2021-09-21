# Dictionary is a collection of key-value pairs.
myDict = {
"fast": "In a quick manner",
"dhruv": "Coder",
"marks": [90, 78, 88],
"anotherdict": {1: "One", 2: "Two", 3: "Three"}
}
print(myDict["dhruv"])
print(myDict["marks"])
print("\nChanging the value of marks in the dictionary")
myDict["marks"] = [98, 80, 90]
print(myDict["marks"])
# Multiple keys of same name not allowed.  Dictionaries can be nested
print(myDict["anotherdict"])

# Dictionary methods
print("\n")
#print(myDict.keys()) # prints all keys.
print(list(myDict.keys())) # typecasts the dict-keys into a list.
print(myDict.values()) # prints all values.
print(myDict.items()) # prints (key,value)
updateDict = {
33: "Thirty Three"
}
print(myDict)
myDict.update(updateDict)
print(myDict)

print(myDict.get("dhruv"))  # returns the value
print(myDict["dhruv"])      # returns the value

# The difference in .get() and [] methods:
print(myDict.get("dhruv2"))  # returns None bcoz key not present
#print(myDict["dhruv"])      # returns an error bcoz key not present

# For more methods on dictionaries, search on Internet
