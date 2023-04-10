						<%@ page language="java" contentType="text/html; charset=UTF-8"
    pageEncoding="UTF-8"%>
    <%@ page import = "java.io.*,java.util.*,java.sql.*"%>

<%@ page import = "javax.servlet.http.*,javax.servlet.*" %>
<%@ taglib uri="http://java.sun.com/jsp/jstl/core" prefix = "c"%>
<%@ taglib uri="http://java.sun.com/jsp/jstl/sql" prefix = "sql"%>
<%@ taglib uri="WEB-INF/stag.tld" prefix="s" %>  


<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">
<title>Insert title here</title>
</head>
<body>

	<s:dis/>
      <sql:setDataSource var = "sp" driver = "com.mysql.jdbc.Driver"
         url = "jdbc:mysql://localhost/students"
         user = "root"  password = ""/>
         
         <sql:query dataSource = "${sp}" var = "result">
        		 SELECT * from person;
    	  </sql:query>
      
      	  <table border = "1" width = "100%">
         <tr>
            <th>Id</th>
            <th>name</th>
            <th>subject</th>
            <th>Age</th>
         </tr>
         
         <c:forEach var = "row" items = "${result.rows}">
            <tr>
               <td><c:out value = "${row.id}"/></td>
               <td><c:out value = "${row.name}"/></td>
               <td><c:out value = "${row.subject}"/></td>
               <td><c:out value = "${row.age}"/></td>
            </tr>
         </c:forEach>
      </table>
 
</body>
</html>