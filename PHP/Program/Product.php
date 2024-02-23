<?php
class Product{
    private int $idProduct;
    private string $name;
    private string $brand;
    private int $price;

    public function __construct($idProduct = -1, $name = "", $brand = "", $price = 0) {
        $this->idProduct = $idProduct;
        $this->name = $name;
        $this->brand = $brand;
        $this->price = $price;
    }

    public function getIdProduct(){
        return $this->idProduct;
    }
    
    public function getName(){
        return $this->name;
    }
    
    public function getBrand(){
        return $this->brand;
    }
    
    public function getPrice(){
        return $this->price;
    }

    public function setIdProduct($idProduct){
        $this->idProduct = $idProduct;
    }

    public function setName($name){
        $this->name = $name;
    }

    public function setBrand($brand){
        $this->brand = $brand;
    }

    public function setPrice($price){
        $this->price = $price;
    }
}
?>