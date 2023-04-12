<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Welcome</title>
	<style>
		h4{
			
			text-shadow:1px 1px white;
			padding:10px;
			width:100px;
			color:red;
			background:blue;
		}
	</style>
</head>
<body>
	<%! int i=10;int n=5;%>
	
	<%= i*i%>
	
	<% for(int i=1;i<=10;i++)
	{ %>
		<h4><%= n+" x "+i+" = "+(n*i) %></h4>
		<%}%>
</body>
</html>