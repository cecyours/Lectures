<%@page import="java.util.List"%>
<%@page import="com.example.model.Movie"%>
<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<style>
	div{
	padding:20px;
	margin:20px;
	background:cyan;}
</style>
<body>
	

	<%List<Movie> mlist = (List<Movie>)request.getAttribute("list");
		for(Movie m : mlist)
		{
	%>
		<div>	

			<h2><%=m.getMovieId()+" - "+m.getMovieName() %></h2>
				<img src="/images/<%=m.getMoviePoster() %>">
		</div>
	<%} %>
</body>
</html>