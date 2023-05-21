package com.example.student;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.servlet.ModelAndView;

@Controller
public class HomeController {

	
	@GetMapping("/")
 
	public ModelAndView homePage()
	{
		return new ModelAndView("index.jsp");
	}
	
	@GetMapping("/user")
	@ResponseBody
	public String userPage()
	{
		return "Hii";
	}
	
	

}
