import pickle

# Pickling packs a Python object and stores it in .pkl format
# for later use.  File is in binary format.
list1 = ['Notepad', 'Notebook', 'Pens', 'Ruler', 'Calculator']
newfile = 'mytable.pkl'
fileobj = open(newfile, "wb")
pickle.dump(list1, fileobj)
fileobj.close()

# Unpickling:
fileobj = open('mytable.pkl', "rb")
filecontents = pickle.load(fileobj)
print(type(filecontents))
print(filecontents)