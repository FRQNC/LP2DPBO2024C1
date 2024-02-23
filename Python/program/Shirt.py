from Clothing import Clothing

class Shirt(Clothing):

    __color = ""
    __sleeveType = ""

    def __init__(self, color = "", sleeveType = ""):
        self.__color = color
        self.__sleeveType = sleeveType
    
    def getColor(self):
        return self.__color
    
    def getSleeveType(self):
        return self.__sleeveType
    
    def setColor(self, color):
        self.__color = color
    
    def setSleeveType(self, sleeveType):
        self.__sleeveType = sleeveType
    