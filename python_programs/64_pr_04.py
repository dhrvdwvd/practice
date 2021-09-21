class Vector:
    def __init__(self, alist):
        lenlist = len(alist)
        i=0
        
        for item in alist:
            if(type(item) == float or type(item) == int):
                i+=1
        
        if(i==lenlist):
            self.vec = alist
        else:
            print("List not valid!")
            exit()
     
    def __str__(self):
        string1 = ""
        for i in range(len(self.vec)):
            string1+=(f"{self.vec[i]} a{i} + ")
        string1 = string1.strip()
        string1 = string1[:-1]
        return string1
        
    def __add__(self, vec2):
        if(len(self.vec)!=len(vec2.vec)):
            print("Error!  Adding vectors with unequal dimensions.")
            exit()
        else:
            newlist = []
            for i in range(len(self.vec)):
                newlist.append(self.vec[i]+vec2.vec[i])
            return newlist
    
    def __mul__(self, vec2):
        if(len(self.vec)!=len(vec2.vec)):
            print("Error!  Adding vectors with unequal dimensions.")
            exit()
        else:
            sum=0
            for i in range(len(self.vec)):
                sum+=self.vec[i]*vec2.vec[i]
            return sum
    
    
v1 = Vector([1,3])
v2 = Vector([2,3])
print(v1+v2)
print(v1*v2)