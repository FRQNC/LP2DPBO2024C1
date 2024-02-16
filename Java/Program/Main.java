/*Saya Muhamad Furqon Al-Haqqi NIM 2207207 mengerjakan LP1 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/
import java.util.Scanner;
import java.util.LinkedList;

public class Main {
    public static void main(String[] args){
        Main mainInstance = new Main();
        boolean stop = false;
        LinkedList<Shirt> shirts = new LinkedList<Shirt>();
        Shirt shirt1 = new Shirt("Black","Short");
        Shirt shirt2 = new Shirt("White","Short");
        Shirt shirt3 = new Shirt("Green","Short");
        
        shirt1.setIdProduct(1);
        shirt1.setName("Black T-Shirt");
        shirt1.setBrand("Kuro");
        shirt1.setPrice(1000000);
        shirt1.setSize("L");
        shirt1.setMaterial("Cotton Combed");
        shirt1.setGender('U');
        
        shirt2.setIdProduct(2);
        shirt2.setName("White T-Shirt");
        shirt2.setBrand("Shiro");
        shirt2.setPrice(1000000);
        shirt2.setSize("XL");
        shirt2.setMaterial("Cotton Combed");
        shirt2.setGender('L');
        
        shirt3.setIdProduct(3);
        shirt3.setName("Green T-Shirt");
        shirt3.setBrand("Midori");
        shirt3.setPrice(1000000);
        shirt3.setSize("M");
        shirt3.setMaterial("Cotton Combed");
        shirt3.setGender('P');

        shirts.addLast(shirt1);
        shirts.addLast(shirt2);
        shirts.addLast(shirt3);


        while(!stop){
            System.out.println();
            System.out.println("List of Shirt");
            //table
            mainInstance.printTable(shirts);
            System.out.println();
            System.out.println("=====================");
            System.out.println("1. Tambah data");
            System.out.println("2. Ubah data");
            System.out.println("3. Hapus data");
            System.out.println("4. Keluar aplikasi");
            System.out.println("=====================");
            System.out.print("Input disini : ");
            
            Scanner sc = new Scanner(System.in);
            int menu = sc.nextInt();
            System.out.println();
            switch(menu){
                case 1:
                System.out.println("--------- Start of Tambah Data ---------");
                System.out.print("Input ID Product : ");
                int id = sc.nextInt();
                
                System.out.print("Input Nama Produk: ");
                String name = sc.next();
                
                System.out.print("Input Brand : ");
                String brand = sc.next();
                
                System.out.print("Input Harga : ");
                int price = sc.nextInt();
                
                System.out.print("Input Size : ");
                String size = sc.next();
                
                System.out.print("Input Material : ");
                String material = sc.next();

                System.out.print("Input Gender : ");
                char gender = sc.next().charAt(0);

                System.out.print("Input Color : ");
                String color = sc.next();

                System.out.print("Input Sleeve Type : ");
                String sleeveType = sc.next();
                
                System.out.println("---------- End of Tambah Data ----------");

                Shirt temp = new Shirt(color, sleeveType);
                temp.setIdProduct(id);
                temp.setName(name);
                temp.setBrand(brand);
                temp.setPrice(price);
                temp.setSize(size);
                temp.setMaterial(material);
                temp.setGender(gender);

                shirts.addLast(temp);
                    break;
                case 2:
                System.out.println("--------- Start of Ubah Data ---------");
                System.out.print("Masukkan ID dari data yang akan diubah: ");
                id = sc.nextInt();
                boolean found = false;
                Shirt edited = new Shirt();
                for(int i = 0;i < shirts.size();i++){
                    temp = shirts.get(i);
                    if(temp.getIdProduct() == id){
                        edited = temp;
                        found = true;
                    }
                }
                if(!found){
                    System.out.println( "ID tidak ada!");
                }
                else{
                    System.out.println();
                    System.out.println("===== Shirt Data =====");
                    System.out.println("ID Produk : " + edited.getIdProduct());
                    System.out.println("Nama : " + edited.getName());
                    System.out.println("Brand : " + edited.getBrand());
                    System.out.println("Price : " + edited.getPrice());
                    System.out.println("Size : " + edited.getSize());
                    System.out.println("Material : " + edited.getMaterial());
                    System.out.println("Gender : " + edited.getGender());
                    System.out.println("Color : " + edited.getColor());
                    System.out.println("Sleeve Type : " + edited.getSleeveType());
                    System.out.println("===== Shirt Data =====");
                    System.out.println();
                    System.out.print("Masukkann Nama baru : ");
                    String newName = sc.next();
                    System.out.print("Masukkann Brand baru : ");
                    String newBrand = sc.next();
                    System.out.print("Masukkann Price baru : ");
                    int newPrice = sc.nextInt();
                    System.out.print("Masukkann Size baru : ");
                    String newSize = sc.next();
                    System.out.print("Masukkann Material baru : ");
                    String newMaterial = sc.next();
                    System.out.print("Masukkann Gender baru : ");
                    char newGender = sc.next().charAt(0);
                    System.out.print("Masukkann Color baru : ");
                    String newColor = sc.next();
                    System.out.print("Masukkann Sleeve Type baru : ");
                    String newSleeveType = sc.next();
                    edited.setName(newName);
                    edited.setBrand(newBrand);
                    edited.setPrice(newPrice);
                    edited.setSize(newSize);
                    edited.setMaterial(newMaterial);
                    edited.setGender(newGender);
                    edited.setColor(newColor);
                    edited.setSleeveType(newSleeveType);
                }
                System.out.println("---------- End of Ubah Data ----------");
                    break;
                case 3:
                    System.out.print("Masukkan ID dari data yang akan dihapus: ");
                    id = sc.nextInt();
                    found = false;
                    int deletedIndex = -1;
                    for(int i = 0;i < shirts.size();i++){
                        temp = shirts.get(i);
                        if(temp.getIdProduct() == id){
                            deletedIndex = i;
                            found = true;
                        }
                    }
                    if(!found){
                        System.out.println( "ID tidak ada!");
                    }
                    else{
                        shirts.remove(deletedIndex);
                        System.out.println("Data berhasil dihapus");
                    }
                    break;
                case 4:
                    stop = true;
                    break;
                default:
                    System.out.println("Menu tidak ada!");
                    break;
            }
        }
    }

    public void printTable(LinkedList<Shirt> shirts){
        int maxLens[] = findMaxLen(shirts);
        int idMaxLen = maxLens[0];
        int nameMaxLen = maxLens[1];
        int brandMaxLen = maxLens[2];
        int priceMaxLen = maxLens[3];
        int sizeMaxLen = maxLens[4];
        int materialMaxLen = maxLens[5];
        int genderMaxLen = maxLens[6];
        int colorMaxLen = maxLens[7];
        int sleeveTypeMaxLen = maxLens[8];
        int maxTableLen = maxLens[9] + 2*9 + 10;
        for(int i = 1;i <= maxTableLen;i++){
            System.out.print("-");
        }
        System.out.println();
        System.out.print("| ID");
        printSpace(idMaxLen - 2 + 1);
        System.out.print("| Name");
        printSpace(nameMaxLen - 4 + 1);
        System.out.print("| Brand");
        printSpace(brandMaxLen - 5 + 1);
        System.out.print("| Price");
        printSpace(priceMaxLen - 5 + 1);
        System.out.print("| Size");
        printSpace(sizeMaxLen - 4 + 1);
        System.out.print("| Material");
        printSpace(materialMaxLen - 8 + 1);
        System.out.print("| Gender");
        printSpace(genderMaxLen - 6 + 1);
        System.out.print("| Color");
        printSpace(colorMaxLen - 5 + 1);
        System.out.print("| Sleeve Type");
        printSpace(sleeveTypeMaxLen - 11 + 1);
        System.out.print("|");
        System.out.println();
        for(int i = 1;i <= maxTableLen;i++){
            System.out.print("-");
        }
        System.out.println();
        for(int i = 0;i < shirts.size();i++){
            Shirt temp = shirts.get(i);
            System.out.print("| " + temp.getIdProduct());
            printSpace(idMaxLen - String.valueOf(temp.getIdProduct()).length() + 1);
            System.out.print("| " + temp.getName());
            printSpace(nameMaxLen - temp.getName().length() + 1);
            System.out.print("| " + temp.getBrand());
            printSpace(brandMaxLen - temp.getBrand().length() + 1);
            System.out.print("| " + temp.getPrice());
            printSpace(priceMaxLen - String.valueOf(temp.getPrice()).length() + 1);
            System.out.print("| " + temp.getSize());
            printSpace(sizeMaxLen - temp.getSize().length() + 1);
            System.out.print("| " + temp.getMaterial());
            printSpace(materialMaxLen - temp.getMaterial().length() + 1);
            System.out.print("| " + temp.getGender());
            printSpace(genderMaxLen);
            System.out.print("| " + temp.getColor());
            printSpace(colorMaxLen - temp.getColor().length() + 1);
            System.out.print("| " + temp.getSleeveType());
            printSpace(sleeveTypeMaxLen - temp.getSleeveType().length() + 1);
            System.out.print("|");
            System.out.println();
            for(int j = 1;j <= maxTableLen;j++){
                System.out.print("-");
            }
            System.out.println();
        }

    }
    public int[] findMaxLen(LinkedList<Shirt> shirts){
        int idMax = 2;
        int nameMax = 4;
        int brandMax = 5;
        int priceMax = 5;
        int sizeMax = 4;
        int materialMax = 8;
        int genderMax = 6;
        int colorMax = 5;
        int sleeveTypeMax = 11;
        for(int i = 0;i < shirts.size();i++){
            Shirt temp = shirts.get(i);
            idMax = Math.max(idMax,String.valueOf(temp.getIdProduct()).length());
            nameMax = Math.max(nameMax,temp.getName().length());
            brandMax = Math.max(brandMax,temp.getBrand().length());
            priceMax = Math.max(idMax,String.valueOf(temp.getPrice()).length());
            sizeMax = Math.max(sizeMax,temp.getSize().length());
            materialMax = Math.max(materialMax,temp.getMaterial().length());
            genderMax = Math.max(genderMax,1);
            colorMax = Math.max(colorMax,temp.getColor().length());
            sleeveTypeMax = Math.max(sleeveTypeMax,temp.getSleeveType().length());
        }
        int total =  idMax + nameMax + brandMax + priceMax + sizeMax + materialMax + genderMax + colorMax + sleeveTypeMax;
        int[] maxLens = {idMax, nameMax, brandMax, priceMax, sizeMax, materialMax, genderMax, colorMax, sleeveTypeMax, total};
        return maxLens;
    }
    public void printSpace(int len){
        for(int i = 1;i <= len;i++){
            System.out.print(" ");
        }
    }
}
