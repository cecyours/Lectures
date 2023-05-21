<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
     
    
     <%@ taglib prefix="c" uri="http://java.sun.com/jsp/jstl/core" %>
    
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
<style>
	
     th,td{
            padding:10px;
            text-align:center;
        }

        tr:nth-child(even) {
            background-color: #f2f2f2;
        }

        table {
            margin: 10px;
            width: 90%;
        }
        thead{
            padding:10px;
            background:#9e0f09;
            color:white;
            text-shadow:1px 1px black;
        }
        
        
</style>
</head>
<body>
	<a href="/you">Add Student</a>
	<table>
	<thead>
		<tr>
			<th>
				Roll NO
			</th>
			
			<th>
				Name
			</th>
			
			<th>
				Subject
			</th>
			
			<th>
				Marks
			</th>
		</tr>
	</thead>
	<tbody> 
		<c:forEach var = "i"  items="${list}">
      	  		<tr>
      	  		
      	  			<td>${i.getStudentRollNo()}</td>
      	  			<td>${i.getStudentName()}</td>
      	  			<td>${i.getSubjectName()}</td>
      	  			<td>${i.getSubjectMarks()}</td>
      	  		</tr>
      	   
      </c:forEach>
	</tbody>	
	</table>
</body>
</html>