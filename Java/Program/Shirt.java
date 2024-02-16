public class Shirt extends Clothing{
    String color, sleeveType;

    public Shirt(){
        this.color = "";
        this.sleeveType = "";
    }

    public Shirt(String color, String sleeveType){
        this.color = color;
        this.sleeveType = sleeveType;
    }

    public void setColor(String color) {
        this.color = color;
    }

    public void setSleeveType(String sleeveType) {
        this.sleeveType = sleeveType;
    }

    public String getColor() {
        return color;
    }

    public String getSleeveType() {
        return sleeveType;
    }
}
