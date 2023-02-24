package com.servlets;

import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class AnotherServlet
 */
@WebServlet("/ValidUser")
public class AnotherServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
  
	@Override
	protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		// TODO Auto-generated method stub
		
		HttpSession session = req.getSession();
		
		String fullName = (String) session.getAttribute("fullname");
		String email = (String)session.getAttribute("email");
		
		resp.getWriter().write("Valid user.. "+fullName+"\t"+email);
	}

}
