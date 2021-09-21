f = open('another.txt', 'w') # creates a new file if not present
f.write('Please write this to\nthe\nfile.') # file, if exists, is destroyed and then made.
f.close()
# f.write() only takes strings, no integers or numbers
# 'a' is append mode.  Adds at the end of the file.
f = open('another.txt', 'a')
f.write("\nThis will be added to the file another.txt in a new line.")
f.close()
# f.tell() returns the character index on which cursor is, used with readline()
# f.seek(position) is used to return to a specific position,
# position is the character index returned by f.tell()