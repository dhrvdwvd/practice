# with statement automatically opens and closes the file.
# It can be used to write/read from file and is the best way.

with open('another.txt') as f:
    data = f.read()
print(data)

# Looking for a pattern in the file data
if 'another.txt' in data:
    print("'another.txt' string is present in the file.")