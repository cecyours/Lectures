package com.example.controller;

import java.io.IOException;
import java.util.List;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

import com.example.model.Movie;
import com.example.model.MovieService;

/**
 * Servlet implementation class MyController
 */
@WebServlet("/movies")
public class MyController extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
@Override
	protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		
		resp.getWriter().write("Hiii");
		
		RequestDispatcher ds = req.getRequestDispatcher("work.jsp");
		
		List<Movie> lstMovie = MovieService.getList();
		req.setAttribute("list", lstMovie);
		ds.forward(req, resp);
} 
	
}
