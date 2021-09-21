class Vec2D:
    def __init__(self, i, j):
        self.icap = i
        self.jcap = j
    def __str__(self):
        return f"{self.icap}i + {self.jcap}j"
        
class Vec3D(Vec2D):
    def __init__(self,i,j,k):
        super().__init__(i,j)
        self.kcap = k  
    def __str__(self):
        return f"{self.icap}i + {self.jcap}j + {self.kcap}k"
        
v2d = Vec2D(1,3)
print(v2d)
v3d = Vec3D(1,4,6)
print(v3d)