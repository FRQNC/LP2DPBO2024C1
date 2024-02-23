<?php
require("Clothing.php");

class Shirt extends Clothing{
    private $color;
    private $sleeveType;

    public function __construct($color = "", $sleeveType = ""){
        $this->color = $color;
        $this->sleeveType = $sleeveType;
    }

    public function getColor(){
        return $this->color;
    }
    public function getSleeveType(){
        return $this->sleeveType;
    }

    public function setColor($color){
        $this->color = $color;
    }
    public function setSleeveType($sleeveType){
        $this->sleeveType = $sleeveType;
    }
}
?>