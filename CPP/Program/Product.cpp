#include <iostream>
#include <string>

using namespace std;

class Product{
    private:
        int idProduct, price;
        string name, brand;

    public:
        Product(){
            this->idProduct = -1;
            this->price = 0;
            this->name = "";
            this->brand = "";
        }

        void setIdProduct(int idProduct) {
            this->idProduct = idProduct;
        }

        void setPrice(int price) {
            this->price = price;
        }

        void setName(string name) {
            this->name = name;
        }

        void setBrand(string brand) {
            this->brand = brand;
        }

        int getIdProduct() {
            return idProduct;
        }

        int getPrice() {
            return price;
        }

        string getName() {
            return name;
        }

        string getBrand() {
            return brand;
        }
        ~Product(){
            
        }
};