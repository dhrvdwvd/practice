def readFile(filename):
    try:
        with open(filename, "r") as f:
            print(f.read())
    except FileNotFoundError:
        print(f"File {filename} not found.")
        
readFile("1.txt")
readFile("2.txt")
readFile("4.txt")