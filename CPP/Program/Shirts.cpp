#include <iostream>
#include <string>
#include "Clothing.cpp"
using namespace std;

class Shirts : public Clothing {
private:
    string color, sleeveType;

public:
    Shirts(){
    }

    void setColor(string color) {
        this->color = color;
    }

    void setSleeveType(string sleeveType) {
        this->sleeveType = sleeveType;
    }

    string getColor() {
        return color;
    }

    string getSleeveType() {
        return sleeveType;
    }
};
