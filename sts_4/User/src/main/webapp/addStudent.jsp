<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Add Student</title>
<link href="https://cdn.jsdelivr.net/npm/bootstrap@5.0.2/dist/css/bootstrap.min.css" rel="stylesheet" integrity="sha384-EVSTQN3/azprG1Anm3QDgpJLIm9Nao0Yz1ztcQTwFspd3yD65VohhpuuCOmLASjC" crossorigin="anonymous">

<style>
    form{
        padding: 10px;
        width: 70%; 
          margin: 0;
            position: absolute;
            top: 50%;
            left: 50%;
            -ms-transform: translate(-50%, -50%);
            transform: translate(-50%, -50%);
    }
    .form-control{
        margin:10px;
    }
</style>
</head>
<body>
		
		<form class="form" method="post" action="/add2">
			<input type="number" class="form-control" name="studentRollNo"  placeholder="studentRollNo"/>
			<input type="text" class="form-control" name="studentName" placeholder="studentName" />
			<input type="text" class="form-control" name="subjectName" placeholder="subjectName"/>
			<input type="number" class="form-control" name="subjectMarks" placeholder="subjectMarks"/>
            <center>
                <button class="btn btn-primary">Submit</button>
            </center>
		</form>
</body>
</html>