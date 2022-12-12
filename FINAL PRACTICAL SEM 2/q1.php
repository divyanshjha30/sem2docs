<?php
	class Shape{
		public $dimension1;
		public $dimension2;
	}
	class Rectangle extends Shape{
		function __construct($d1, $d2){
			$this->dimension1 = $d1;
			$this->dimension2 = $d2;
		}
		function rect_area(){
			echo "Area of rectangle is:",$this->dimension1*$this->dimension2;
		}
	}
	class Triangle extends Shape{
		function __construct($h, $b){
			$this->dimension1 = $h;
			$this->dimension2 = $b;
		}
		function tri_area(){
			echo "<br>Area of triangle is:", $this->dimension1*$this->dimension2;
		}
	}
	
	$rect = new Rectangle(25,35);
	$rect->rect_area();
	$tri = new Triangle(55,95);
	$tri->tri_area();
?>