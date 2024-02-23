<?php
require("Product.php");

class Clothing extends Product{
    private $size;
    private $material;
    private $gender;

    public function __construct($size="", $material="", $gender=''){
        $this->size = $size;
        $this->material = $material;
        $this->gender = $gender;
    }

    public function getSize(){
        return $this->size;
    }
    public function getMaterial(){
        return $this->material;
    }
    public function getGender(){
        return $this->gender;
    }

    public function setSize($size){
        $this->size = $size;
    }
    public function setMaterial($material){
        $this->material = $material;
    }
    public function setGender($gender){
        $this->gender = $gender;
    }

}
?>