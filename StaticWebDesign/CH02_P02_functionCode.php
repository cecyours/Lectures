
<!DOCTYPE html>
<html>
<head>
	<meta charset="utf-8">
	<meta name="viewport" content="width=device-width, initial-scale=1">
	<link rel="stylesheet" type="text/css" href="mycss.css">
	<title></title>
</head>
<body>

	<?php 

		display();
		display();

		function display()
		{
			echo "<h1>hello coder</h1>";
		}
		echo "<hr/>";

		checkNumber(56);
		checkNumber(562);
		checkNumber(561);

		function checkNumber($num)
		{

			if($num%2==0){
					echo "<h1>even : $num</h1>";
			}	
			else{
				echo "<h1>odd : $num</h1>";
			}
		}

		displayTable(5,"Karan");
		function displayTable($num,$name)
		{
			echo " ---------- $name ------ ";
			for($i=1;$i<=10;$i++)
			{
				echo "<h2>$num x $i = ".($num*$i."</h2>");
			}
		}
	?>
</body>
</html>