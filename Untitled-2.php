<html>


<head>


<title>Bujur sangkar</title> 


</head> 


<body> 


<h2>MENGHITUNG LUAS BUJURSANGKAR</h2> 


<form method="post" action="">

Masukkan Sisi: <input type="text" name="sisi"/><br/><br/>


<input type="submit" name="submit" value="Submit"/><br/>


</form>


<?php


if(isset($_POST['submit'])){


$sisi=$_POST['sisi'];


$luas=$sisi*$sisi;


echo "<p>SISI=$sisi M";


echo "<p>LUASNYA = $luas M^2 ";


}


?>


</body>


</html>