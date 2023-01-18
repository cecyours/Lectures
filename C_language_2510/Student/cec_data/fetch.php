<?php

require 'connection.php';

if ($conn->connect_error){
    die("Connection Failed: ".$conn-> connect_error);

}

$sr = $_POST['srno'];
$name = $_POST['name'];
$photo = $_POST['photo'];
$aadhar = $_POST['aadhar'];
$marksheet = $_POST['marksheet'];

$sql = "INSERT INTO `listOfStudent`(`sr.no`, `name`, `photo`, `aadharcard`, `marksheet`)
 VALUES ('$sr','$name','$photo','$aadhar','$marksheet')";

$rs = mysqli_query($con, $sql);

if($rs)
{
	echo "Contact Records Inserted";
}

?>

<html> 
    <body>

<form action="." method="POST">

  <label for="srno">Roll.NO:</label>
  <input type="text" id="srno" name="srno"><br><br>


  <label for="photo">Photo:</label>
  <input type="file" id="photo" name="photo"><br><br>

  <label for="aadhar">Aadharcard:</label>
  <input type="file" id="aadhar" name="aadhar"><br><br>

  <label for="marksheet">Marksheet:</label>
  <input type="file" id="marksheet" name="marksheet"><br><br>
 
  <input type="submit" value="Submit">
</form>
</body>
</html>