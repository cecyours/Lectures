<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>
	<%@ page errorPage="my_form_error.jsp" %>  
	<%
		int n1 = Integer.parseInt(request.getParameter("num1")); 
		int n2 = Integer.parseInt(request.getParameter("num2")); 
		
		out.println(""+(n1/n2));
	%>
</body>
</html>