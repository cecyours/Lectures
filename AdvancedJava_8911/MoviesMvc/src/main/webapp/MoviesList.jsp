
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    <%@page import="java.util.*"%>
<%@page import="com.example.model.Movie"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<%!
		List<Movie> mList =request.getAttribute("list");	
	%>
		<% for(Movie m: mList)
		{
	%>
		<h1>hj</h1>
	<%} %>
</body>
</html>