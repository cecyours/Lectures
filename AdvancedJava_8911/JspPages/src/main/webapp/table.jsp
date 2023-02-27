<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<%@ page import = " java.util.* " %>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<% int n= Integer.parseInt(request.getParameter("n"));%>
	<h1>welcome <%=n %></h1>
	 
	 <% for(int i=1;i<=10;i++){ %>
	 	<h3><%=n+" x "+i+" = "+(n*i) %></h3>
	 <%} %>
</body>
</html>