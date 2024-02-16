public class Product{
    private int idProduct, price;
    private String name, brand;

    public Product(){
        this.idProduct = -1;
        this.price = 0;
        this.name = "";
        this.brand = "";
    }

    public Product(int idProduct, String name, String brand, int price){
        this.idProduct = idProduct;
        this.price = price;
        this.name = name;
        this.brand = brand;
    }

    public void setIdProduct(int idProduct) {
        this.idProduct = idProduct;
    }
    
    public void setPrice(int price) {
        this.price = price;
    }
    
    public void setName(String name) {
        this.name = name;
    }
    
    public void setBrand(String brand) {
        this.brand = brand;
    }
    
    public int getIdProduct() {
        return idProduct;
    }
    
    public int getPrice() {
        return price;
    }
    
    public String getName() {
        return name;
    }
    
    public String getBrand() {
        return brand;
    }   
}