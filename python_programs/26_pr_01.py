mydict = {
"batti": "electricity",
"dabba": "computational device",
"pankha": "fan"
}
print("Options are:", list(mydict.keys()))
a = input("What word to look up? ")
print(mydict.get(a))