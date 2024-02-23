<?php
require("Shirt.php"); //import class Shirt
$shirts = array(); //array of shirt

$shirt1 = new Shirt(); //3 objek awal
$shirt2 = new Shirt();
$shirt3 = new Shirt();

$shirt1->setIdProduct(1); //set 3 objek awal
$shirt1->setName("Black T-Shirt");
$shirt1->setBrand("Kuro");
$shirt1->setPrice(1000000);
$shirt1->setSize("L");
$shirt1->setMaterial("Cotton Combed");
$shirt1->setGender('U');
$shirt1->setColor("Black");
$shirt1->setSleeveType("Short");

$shirt2->setIdProduct(2);
$shirt2->setName("White T-Shirt");
$shirt2->setBrand("Shiro");
$shirt2->setPrice(1000000);
$shirt2->setSize("XL");
$shirt2->setMaterial("Cotton Combed");
$shirt2->setGender('L');
$shirt2->setColor("White");
$shirt2->setSleeveType("Short");

$shirt3->setIdProduct(3);
$shirt3->setName("Green T-Shirt");
$shirt3->setBrand("Midori");
$shirt3->setPrice(1000000);
$shirt3->setSize("M");
$shirt3->setMaterial("Cotton Combed");
$shirt3->setGender('P');
$shirt3->setColor("Green");
$shirt3->setSleeveType("Short");

array_push($shirts,$shirt1); //masukin 3 objek awal ke array
array_push($shirts,$shirt2);
array_push($shirts,$shirt3);
?>
<table border="1px solid black"> <!-- Table buat print array of shirt-->
    <tr>
        <th>ID Product</th>
        <th>Name</th>
        <th>Brand</th>
        <th>Price</th>
        <th>Size</th>
        <th>Material</th>
        <th>Gender</th>
        <th>Color</th>
        <th>Sleeve Type</th>
    </tr>
    <?php
        foreach($shirts as $s){ //loop sebanyak jumlah item di array, print data tiap item
            echo "<tr>";
            echo "<td>{$s->getIdProduct()}</td>";
            echo "<td>{$s->getName()}</td>";
            echo "<td>{$s->getBrand()}</td>";
            echo "<td>{$s->getPrice()}</td>";
            echo "<td>{$s->getSize()}</td>";
            echo "<td>{$s->getMaterial()}</td>";
            echo "<td>{$s->getGender()}</td>";
            echo "<td>{$s->getColor()}</td>";
            echo "<td>{$s->getSleeveType()}</td>";
            echo "</tr>";
        }
    ?>
</table>