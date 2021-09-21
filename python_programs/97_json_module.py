import json

data = '{"name":"dhruv", "var1":24, "var2":"coder"}'
print("The following is a string:")
print(data)
print("whereas this is another data type (.json)")
parsed_data = json.loads(data)
print("parsed_data type: ", type(parsed_data))
print(parsed_data["var1"])

# Explore this module.  Websites use this kind of data notation.
# Hence it is important to know this data type.