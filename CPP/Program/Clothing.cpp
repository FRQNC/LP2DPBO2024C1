#include <iostream>
#include <string>
#include "Product.cpp"
using namespace std;

class Clothing : public Product {
private:
    string size, material;
    char gender;

public:
    Clothing(){
    }
    void setSize(string size) {
        this->size = size;
    }

    void setMaterial(string material) {
        this->material = material;
    }

    void setGender(char gender) {
        this->gender = gender;
    }

    string getSize() {
        return size;
    }

    string getMaterial() {
        return material;
    }

    char getGender() {
        return gender;
    }
};