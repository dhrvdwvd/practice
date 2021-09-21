def replace_and_strip(str1, word):
    str1 = str1.replace(word, "")
    return str1.strip()

# .strip() method is used to remove extra spaces at the end and
# beginning of a string.
str1 = "      Dhruv Dwivedi      "
#print(str1.strip())
print(replace_and_strip(str1,"Dhruv"))