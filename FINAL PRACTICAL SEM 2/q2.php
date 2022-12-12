<html>
<form action="q2.php" method="get">
Number 1: <input type="text" name="a"><br>
Number 2: <input type="text" name="b"><br>
<input type="submit">
</form>
<br> (i) BY CALL BY VALUE: <br>
<?php 	
function swap($x, $y) {
	$temp = $x;
	$x = $y;
	$y = $temp;
	echo "The value of x is:".$x."<br>";
	echo "The value of y is:".$y."<br><br>";
}

$a = $_GET["a"];
$b = $_GET["b"];
swap($a, $b);
echo "The value of a is :".$a."<br>";
echo "The value of b is :".$b."<br>";
?>
<br> (ii) BY CALL BY REFERENCE: <br>
<?php  
function swapp(&$x, &$y) { 
    $temp = $x;
    $x = $y;
    $y = $temp;
    echo "The value of x is: ".$x."<br>";
    echo "The value of y is: ".$y."<br><br>";
}
  
$c = 30;
$d = 25;
swapp($c, $d);
echo "The value of a is: ".$c."<br>";
echo "The value of b is: ".$d."<br>";
?>
</html>