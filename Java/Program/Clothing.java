public class Clothing extends Product {
    private String size, material;
    private char gender;

    public Clothing(){
        this.size = "";
        this.material = "";
        this.gender = '\0';
    }

    public Clothing(String size, String material, char gender){
        this.size = size;
        this.material = material;
        this.gender = gender;
    }

    public void setSize(String size) {
        this.size = size;
    }

    public void setMaterial(String material) {
        this.material = material;
    }

    public void setGender(char gender) {
        this.gender = gender;
    }

    public String getSize() {
        return size;
    }

    public String getMaterial() {
        return material;
    }

    public char getGender() {
        return gender;
    }
}
