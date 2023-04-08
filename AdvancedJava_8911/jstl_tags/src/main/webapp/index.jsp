<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
<%@ taglib uri = "http://java.sun.com/jsp/jstl/core" prefix = "c" %>
</head>
<body>
		<c:set var="price" scope="session"  value="${199}"/>
		
		<c:out value="${price}"/>
</body>
</html>