/*Saya Muhamad Furqon Al-Haqqi NIM 2207207 mengerjakan LP2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
#include <bits/stdc++.h>
#include "Shirts.cpp"
using namespace std;

void findMaxLen(vector<Shirts> myShirts, int maxLens[]){ //buat nyari max len tiap kolom
    int idMax = 2; //value awal sesuai panjang nama kolom masing-masing
    int nameMax = 4;
    int brandMax = 5;
    int priceMax = 5;
    int sizeMax = 4;
    int materialMax = 8;
    int genderMax = 6;
    int colorMax = 5;
    int sleeveTypeMax = 11;

    for(vector<Shirts>::iterator it = myShirts.begin(); it != myShirts.end();it++){ //loop through list (bandingin per row) buat nyari max
        idMax = max(idMax,(int)to_string(it->getIdProduct()).length());
        nameMax = max(nameMax,(int)it->getName().length());
        brandMax = max(brandMax,(int)it->getBrand().length());
        priceMax = max(priceMax,(int)to_string(it->getPrice()).length());
        sizeMax = max(sizeMax,(int)it->getSize().length());
        materialMax = max(materialMax,(int)it->getMaterial().length());
        genderMax = max(genderMax, 1);
        colorMax = max(colorMax,(int)it->getColor().length());
        sleeveTypeMax = max(sleeveTypeMax,(int)it->getSleeveType().length());
    }
    int total =  idMax + nameMax + brandMax + priceMax + sizeMax + materialMax + genderMax + colorMax + sleeveTypeMax; //total max len
    maxLens[0] = idMax;
    maxLens[1] = nameMax;
    maxLens[2] = brandMax;
    maxLens[3] = priceMax;
    maxLens[4] = sizeMax;
    maxLens[5] = materialMax;
    maxLens[6] = genderMax;
    maxLens[7] = colorMax;
    maxLens[8] = sleeveTypeMax;
    maxLens[9] = total;
}

void printSpace(int len){ //print space sebanyak len
    for(int i = 1;i <= len;i++){
        cout << " ";
    }
}

void printTable(vector<Shirts> myShirts){
    int maxLens[10]; //var buat nampung max len tiap kolom + total
    findMaxLen(myShirts,maxLens); //cari max len tiap col
    int idMaxLen = maxLens[0]; //assign isi array ke var
    int nameMaxLen = maxLens[1];
    int brandMaxLen = maxLens[2];
    int priceMaxLen = maxLens[3];
    int sizeMaxLen = maxLens[4];
    int materialMaxLen = maxLens[5];
    int genderMaxLen = maxLens[6];
    int colorMaxLen = maxLens[7];
    int sleeveTypeMaxLen = maxLens[8];
    int maxTableLen = maxLens[9] + 2*9 + 10; //2*9 -> per kolom butuh minimal spasi 2, + 10 jumlah |
    for(int i = 1;i <= maxTableLen;i++){
        cout << "-";
    }
    cout << endl;
    cout << "| ID";
    printSpace(idMaxLen - 2 + 1);
    cout << "| Name";
    printSpace(nameMaxLen - 4 + 1);
    cout << "| Brand";
    printSpace(brandMaxLen - 5 + 1);
    cout << "| Price";
    printSpace(priceMaxLen - 5 + 1);
    cout << "| Size";
    printSpace(sizeMaxLen - 4 + 1);
    cout << "| Material";
    printSpace(materialMaxLen - 8 + 1);
    cout << "| Gender";
    printSpace(genderMaxLen - 6 + 1);
    cout << "| Color";
    printSpace(colorMaxLen - 5 + 1);
    cout << "| Sleeve Type";
    printSpace(sleeveTypeMaxLen - 11 + 1);
    cout << "|";
    cout << endl;
    for(int i = 1;i <= maxTableLen;i++){
        cout << "-";
    }
    cout << endl;
    for(vector<Shirts>::iterator it = myShirts.begin();it != myShirts.end();it++){ //loop through list buat print data
        cout << "| " << it->getIdProduct();
        printSpace(idMaxLen - (int)to_string(it->getIdProduct()).length() + 1);
        cout << "| " << it->getName();
        printSpace(nameMaxLen - (int)it->getName().length() + 1);
        cout << "| " << it->getBrand();
        printSpace(brandMaxLen - (int)it->getBrand().length() + 1);
        cout << "| " << it->getPrice();
        printSpace(priceMaxLen - (int)to_string(it->getPrice()).length() + 1);
        cout << "| " << it->getSize();
        printSpace(sizeMaxLen - (int)it->getSize().length() + 1);
        cout << "| " << it->getMaterial();
        printSpace(materialMaxLen - (int)it->getMaterial().length() + 1);
        cout << "| " << it->getGender();
        printSpace(genderMaxLen);
        cout << "| " << it->getColor();
        printSpace(colorMaxLen - (int)it->getColor().length() + 1);
        cout << "| " << it->getSleeveType();
        printSpace(sleeveTypeMaxLen - (int)it->getSleeveType().length() + 1);
        cout << "|";
        cout << endl;
        for(int j = 1;j <= maxTableLen;j++){
            cout << "-";
        }
        cout << endl;
    }
}

int main(){

    vector<Shirts> myShirts; //list of shirt

    Shirts shirt1; //3 objek awal
    Shirts shirt2;
    Shirts shirt3;

    shirt1.setIdProduct(1); //set 3 objek awal
    shirt1.setName("Black T-Shirt");
    shirt1.setBrand("Kuro");
    shirt1.setPrice(1000000);
    shirt1.setSize("L");
    shirt1.setMaterial("Cotton Combed");
    shirt1.setGender('U');
    shirt1.setColor("Black");
    shirt1.setSleeveType("Short");
    
    shirt2.setIdProduct(2);
    shirt2.setName("White T-Shirt");
    shirt2.setBrand("Shiro");
    shirt2.setPrice(1000000);
    shirt2.setSize("XL");
    shirt2.setMaterial("Cotton Combed");
    shirt2.setGender('L');
    shirt2.setColor("White");
    shirt2.setSleeveType("Short");
    
    shirt3.setIdProduct(3);
    shirt3.setName("Green T-Shirt");
    shirt3.setBrand("Midori");
    shirt3.setPrice(1000000);
    shirt3.setSize("M");
    shirt3.setMaterial("Cotton Combed");
    shirt3.setGender('P');
    shirt3.setColor("Green");
    shirt3.setSleeveType("Short");

    myShirts.push_back(shirt1); //masukin 3 objek awal ke list
    myShirts.push_back(shirt2);
    myShirts.push_back(shirt3);

    bool stop = false;
    while(!stop){ //selama program belum ditutup
        cout << endl;
        cout << "List of Shirt" << endl; //print judul + table
        printTable(myShirts);
        cout << "=====================" << endl;
        cout << "1. Tambah data" << endl;
        cout << "2. Ubah data" << endl;
        cout << "3. Hapus data" << endl;
        cout << "4. Keluar aplikasi" << endl;
        cout << "=====================" << endl;
        cout << "Input disini : ";

        int menu;
        cin >> menu;
        cout << endl;

        switch (menu) {
            case 1: {
                cout << "--------- Start of Tambah Data ---------" << endl;
                int id;
                string name, brand, size, material, color, sleeveType;
                char gender;

                cout << "Input ID Product : ";
                cin >> id;

                cout << "Input Nama Produk: ";
                cin >> name;

                cout << "Input Brand : ";
                cin >> brand;

                cout << "Input Harga : ";
                int price;
                cin >> price;

                cout << "Input Size : ";
                cin >> size;

                cout << "Input Material : ";
                cin >> material;

                cout << "Input Gender : ";
                cin >> gender;

                cout << "Input Color : ";
                cin >> color;

                cout << "Input Sleeve Type : ";
                cin >> sleeveType;

                cout << "---------- End of Tambah Data ----------" << endl;

                Shirts temp; //obj buat nampung data yg udah dimasukin
                temp.setIdProduct(id);
                temp.setName(name);
                temp.setBrand(brand);
                temp.setPrice(price);
                temp.setSize(size);
                temp.setMaterial(material);
                temp.setGender(gender);
                temp.setColor(color);
                temp.setSleeveType(sleeveType);

                myShirts.push_back(temp); //masukin obj ke list
                break;
            }
            case 2:
            {
                cout << "--------- Start of Ubah Data ---------" << endl;
                cout << "Masukkan ID dari data yang akan diubah: ";
                int id;
                cin >> id;
                int found = -1, i = 0; //var bantu
                for (vector<Shirts>::iterator it = myShirts.begin(); it != myShirts.end(); it++) { //loop through list buat nyari id yg dimasukin user
                    if (it->getIdProduct() == id) { //kalo id yg dicari itu ada
                        found = i; //set found ke index ditemukannya obj
                    }
                    i++; //majuin i
                }
                if (found == -1) { //kalo gk ketemu
                    cout << "ID tidak ada!" << endl;
                } else { //kalo obj yg mau diubah ketemu
                    Shirts edited = myShirts[found]; //tampung obj yg mau diubah
                    cout << endl;
                    cout << "===== Shirt Data =====" << endl;
                    cout << "ID Produk : " << edited.getIdProduct() << endl;
                    cout << "Nama : " << edited.getName() << endl;
                    cout << "Brand : " << edited.getBrand() << endl;
                    cout << "Price : " << edited.getPrice() << endl;
                    cout << "Size : " << edited.getSize() << endl;
                    cout << "Material : " << edited.getMaterial() << endl;
                    cout << "Gender : " << edited.getGender() << endl;
                    cout << "Color : " << edited.getColor() << endl;
                    cout << "Sleeve Type : " << edited.getSleeveType() << endl;
                    cout << "===== Shirt Data =====" << endl;
                    cout << endl;
                    cout << "Masukkan Nama baru : ";
                    string newName;
                    cin >> newName;
                    cout << "Masukkan Brand baru : ";
                    string newBrand;
                    cin >> newBrand;
                    cout << "Masukkan Price baru : ";
                    int newPrice;
                    cin >> newPrice;
                    cout << "Masukkan Size baru : ";
                    string newSize;
                    cin >> newSize;
                    cout << "Masukkan Material baru : ";
                    string newMaterial;
                    cin >> newMaterial;
                    cout << "Masukkan Gender baru : ";
                    char newGender;
                    cin >> newGender;
                    cout << "Masukkan Color baru : ";
                    string newColor;
                    cin >> newColor;
                    cout << "Masukkan Sleeve Type baru : ";
                    string newSleeveType;
                    cin >> newSleeveType;

                    cout << "---------- End of Ubah Data ----------" << endl;

                    myShirts[found].setName(newName); //ubah data obj sesuai masukkan
                    myShirts[found].setBrand(newBrand);
                    myShirts[found].setPrice(newPrice);
                    myShirts[found].setSize(newSize);
                    myShirts[found].setMaterial(newMaterial);
                    myShirts[found].setGender(newGender);
                    myShirts[found].setColor(newColor);
                    myShirts[found].setSleeveType(newSleeveType);
                }
                break;
                }
                case 3:
                {
                    int id;
                    cout << "Masukkan ID dari data yang akan dihapus: ";
                    cin >> id;
                    cout << endl;
                    int i = 0, found = -1;
                    vector<Shirts>::iterator deleted = myShirts.begin(); //set deleted ke elemen pertama dulu
                    for(vector<Shirts>::iterator it = myShirts.begin();it != myShirts.end();it++){ //loop through list buat nyari id
                        if(it->getIdProduct() == id){ //kalo id yg dicari ketemu
                            deleted = it; //set deleted ke obj yg ditemuin
                            found = i;
                        }
                        i++;
                    }
                    if(found == -1){ //kalo gk ketemu
                        cout << "ID tidak ada!" << endl;
                    }
                    else{ //kalo ketemu
                        myShirts.erase(deleted); //hapus obj dari list
                    }
                    break;
                    }
                case 4:
                {
                    stop = true;
                    break;
                    }
                default:
                {
                    cout << "Invalid input!\n";
                    break;
                    }
        }
    }
    
    return 0;
}