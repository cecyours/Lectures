package com.servlets;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 * Servlet implementation class MyServlet
 */
@WebServlet("/FormRegister")
public class MyServlet extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    /**
     * @see HttpServlet#HttpServlet()
     */
    public MyServlet() {
     
    }

	/**
	 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
	 */
	public void doPost(HttpServletRequest req, HttpServletResponse res) throws ServletException, IOException {
		
		String password = req.getParameter("password");
		String confirmpassword = req.getParameter("confirmpassword");
		String fullname = req.getParameter("fullname");
		String email = req.getParameter("email");
		String phone = req.getParameter("phone");

		String gender = req.getParameter("gender");
		
		if(password.equals(confirmpassword))
		{
			
			//redirect
			RequestDispatcher reqd = req.getRequestDispatcher("ValidUser");
			
			reqd.forward(req, res);
		      
		}
		else
		{
			res.getWriter().write("Please try again..");
		}
	}

}
