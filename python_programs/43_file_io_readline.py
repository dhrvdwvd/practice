f = open('sample.txt', 'r')  # 'rb' if file is in binary format.
# reads first line
data = f.readline()
print(data)

# reads second line
data = f.readline()
print(data)

# reads third line
data = f.readline()
print(data)