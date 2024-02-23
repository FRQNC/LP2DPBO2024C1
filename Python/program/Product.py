class Product:
    __idProduct = -1
    __name = ""
    __brand = ""
    __price = 0

    def __init__(self, idProduct = -1, name = "", brand = "", price = 0):
        self.__idProduct = idProduct
        self.__name = name
        self.__brand = brand
        self.__price = price

    def getIdProduct(self):
        return self.__idProduct
    
    def getName(self):
        return self.__name
    
    def getBrand(self):
        return self.__brand
    
    def getPrice(self):
        return self.__price

    def setIdProduct(self, idProduct):
        self.__idProduct = idProduct
    
    def setName(self, name):
        self.__name = name
    
    def setBrand(self, brand):
        self.__brand = brand
    
    def setPrice(self, price):
        self.__price = price