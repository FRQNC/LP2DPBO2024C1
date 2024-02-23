# Saya Muhamad Furqon Al-Haqqi NIM 2207207 mengerjakan LP2 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
from Shirt import Shirt

def findMaxLen(shirts): #buat nyari max len tiap kolom
    idMax = 2 #value awal sesuai panjang nama kolom masing-masing
    nameMax = 4
    brandMax = 5
    priceMax = 5
    sizeMax = 4
    materialMax = 8
    genderMax = 6
    colorMax = 5
    sleeveTypeMax = 11
    
    for shirt in shirts: #loop through list (bandingin per row) buat nyari max
        idMax = max(idMax, len(str(shirt.getIdProduct())))
        nameMax = max(nameMax, len(shirt.getName()))
        brandMax = max(brandMax, len(shirt.getBrand()))
        priceMax = max(priceMax, len(str(shirt.getPrice())))
        sizeMax = max(sizeMax, len(shirt.getSize()))
        materialMax = max(materialMax, len(shirt.getMaterial()))
        genderMax = max(genderMax, 1)
        colorMax = max(colorMax, len(shirt.getColor()))
        sleeveTypeMax = max(sleeveTypeMax, len(shirt.getSleeveType()))
    
    total = idMax + nameMax + brandMax + priceMax + sizeMax + materialMax + genderMax + colorMax + sleeveTypeMax #total max len
    maxLens = [idMax, nameMax, brandMax, priceMax, sizeMax, materialMax, genderMax, colorMax, sleeveTypeMax, total] #array yg menampung max len tiap col
    return maxLens #return array max len yg berisi max len tiap col

def printSpace(len): #print space sebanyak len
    print(" " * len,end="")

def printTable(shirts):
    maxLens = findMaxLen(shirts) #cari max len tiap col
    idMaxLen = maxLens[0] #assign isi array ke var
    nameMaxLen = maxLens[1]
    brandMaxLen = maxLens[2]
    priceMaxLen = maxLens[3]
    sizeMaxLen = maxLens[4]
    materialMaxLen = maxLens[5]
    genderMaxLen = maxLens[6]
    colorMaxLen = maxLens[7]
    sleeveTypeMaxLen = maxLens[8]
    maxTableLen = maxLens[9] + 2 * 9 + 10 #2*9 -> per kolom butuh minimal spasi 2, + 10 jumlah |

    print("-"*maxTableLen)
    print("| ID", end="")
    printSpace(idMaxLen - 2 + 1)
    print("| Name", end="")
    printSpace(nameMaxLen - 4 + 1)
    print("| Brand", end="")
    printSpace(brandMaxLen - 5 + 1)
    print("| Price", end="")
    printSpace(priceMaxLen - 5 + 1)
    print("| Size", end="")
    printSpace(sizeMaxLen - 4 + 1)
    print("| Material", end="")
    printSpace(materialMaxLen - 8 + 1)
    print("| Gender", end="")
    printSpace(genderMaxLen - 6 + 1)
    print("| Color", end="")
    printSpace(colorMaxLen - 5 + 1)
    print("| Sleeve Type", end="")
    printSpace(sleeveTypeMaxLen - 11 + 1)
    print("|")
    
    print("-"*maxTableLen)
    
    for shirt in shirts: #loop through list buat print data
        print(f"| {shirt.getIdProduct()}", end="")
        printSpace(idMaxLen - len(str(shirt.getIdProduct())) + 1)
        print(f"| {shirt.getName()}", end="")
        printSpace(nameMaxLen - len(shirt.getName()) + 1)
        print(f"| {shirt.getBrand()}", end="")
        printSpace(brandMaxLen - len(shirt.getBrand()) + 1)
        print(f"| {shirt.getPrice()}", end="")
        printSpace(priceMaxLen - len(str(shirt.getPrice())) + 1)
        print(f"| {shirt.getSize()}", end="")
        printSpace(sizeMaxLen - len(shirt.getSize()) + 1)
        print(f"| {shirt.getMaterial()}", end="")
        printSpace(materialMaxLen - len(shirt.getMaterial()) + 1)
        print(f"| {shirt.getGender()}", end="")
        printSpace(genderMaxLen)
        print(f"| {shirt.getColor()}", end="")
        printSpace(colorMaxLen - len(shirt.getColor()) + 1)
        print(f"| {shirt.getSleeveType()}", end="")
        printSpace(sleeveTypeMaxLen - len(shirt.getSleeveType()) + 1)
        print("|")
        
        print("-"*maxTableLen)

stop = False
Shirts = list() #list of shirt

shirt1 = Shirt() #3 objek awal
shirt2 = Shirt()
shirt3 = Shirt()

shirt1.setIdProduct(1) #set 3 objek awal
shirt1.setName("Black T-Shirt")
shirt1.setBrand("Kuro")
shirt1.setPrice(1000000)
shirt1.setSize("L")
shirt1.setMaterial("Cotton Combed")
shirt1.setGender('U')
shirt1.setColor("Black")
shirt1.setSleeveType("Short")

shirt2.setIdProduct(2)
shirt2.setName("White T-Shirt")
shirt2.setBrand("Shiro")
shirt2.setPrice(1000000)
shirt2.setSize("XL")
shirt2.setMaterial("Cotton Combed")
shirt2.setGender('L')
shirt2.setColor("White")
shirt2.setSleeveType("Short")

shirt3.setIdProduct(3)
shirt3.setName("Green T-Shirt")
shirt3.setBrand("Midori")
shirt3.setPrice(1000000)
shirt3.setSize("M")
shirt3.setMaterial("Cotton Combed")
shirt3.setGender('P')
shirt3.setColor("Green")
shirt3.setSleeveType("Short")

Shirts.append(shirt1) #masukin 3 objek awal ke list
Shirts.append(shirt2)
Shirts.append(shirt3)

while(not stop): #selama program belum ditutup
    
    print("List of Shirts") #print judul + table
    printTable(Shirts)
    
    print("=====================")
    print("1. Tambah data")
    print("2. Ubah data")
    print("3. Hapus data")
    print("4. Keluar aplikasi")
    print("=====================")
    menu = int(input("Input disini : "))
    
    if(menu == 1):
        print("--------- Start of Tambah Data ---------")
        id = int(input("Input ID Product : "))
        name = input("Input Nama Produk: ")
        brand = input("Input Brand : ")
        price = int(input("Input Harga : "))
        size = input("Input Size : ")
        material = input("Input Material : ")
        gender = input("Input Gender : ")[0]
        color = input("Input Color : ")
        sleeveType = input("Input Sleeve Type : ")
        print("---------- End of Tambah Data ----------")
        tempShirt = Shirt() #obj buat nampung data yg udah dimasukin
        tempShirt.setIdProduct(id)
        tempShirt.setName(name)
        tempShirt.setBrand(brand)
        tempShirt.setPrice(price)
        tempShirt.setSize(size)
        tempShirt.setMaterial(material)
        tempShirt.setGender(gender)
        tempShirt.setColor(color)
        tempShirt.setSleeveType(sleeveType)
        Shirts.append(tempShirt) #masukin obj ke list
    elif(menu == 2):
        print("--------- Start of Ubah Data ---------")
        id = int(input("Masukkan ID dari data yang akan diubah: "))
        found = False #var bantu
        edited = Shirt() #var buat nampung obj yg bakal diubah
        for temp in Shirts: #loop through list buat nyari id yg sesuai
            if temp.getIdProduct() == id: #kalo sesuai
                edited = temp #set edited ke obj diiterasi saat ini
                found = True #set found ke true
            
        if not found: #kalo gk ketemu
            print("ID tidak ada!")
        else: #kalo ketemu
            
            print("===== Shirt Data =====")
            print("ID Produk :", edited.getIdProduct())
            print("Nama :", edited.getName())
            print("Brand :", edited.getBrand())
            print("Price :", edited.getPrice())
            print("Size :", edited.getSize())
            print("Material :", edited.getMaterial())
            print("Gender :", edited.getGender())
            print("Color :", edited.getColor())
            print("Sleeve Type :", edited.getSleeveType())
            print("===== Shirt Data =====")
            
            newName = input("Masukkan Nama baru : ")
            newBrand = input("Masukkan Brand baru : ")
            newPrice = int(input("Masukkan Price baru : "))
            newSize = input("Masukkan Size baru : ")
            newMaterial = input("Masukkan Material baru : ")
            newGender = input("Masukkan Gender baru : ")[0]
            newColor = input("Masukkan Color baru : ")
            newSleeveType = input("Masukkan Sleeve Type baru : ")
            edited.setName(newName) #ubah data obj sesuai masukkan
            edited.setBrand(newBrand)
            edited.setPrice(newPrice)
            edited.setSize(newSize)
            edited.setMaterial(newMaterial)
            edited.setGender(newGender)
            edited.setColor(newColor)
            edited.setSleeveType(newSleeveType)

        print("---------- End of Ubah Data ----------")

    elif(menu == 3):
        id = int(input("Masukkan ID dari data yang akan dihapus: "))
        found = False
        deleted = Shirt() #var buat nampung obj yg bakal dihapus
        for i in Shirts: #loop through list buat nyari id yg sesuai
            if i.getIdProduct() == id: #kalo sesuai
                deleted = i #set deleted ke obj diiterasi saat ini
                found = True #set found ke true
        if not found: #kalo gk ketemu
            print("ID tidak ada!")
        else: #kalo ketemu
            Shirts.remove(deleted) #hapus obj dari list
    elif(menu == 4):
        stop = True
    else:
        print("Menu tidak ada!")