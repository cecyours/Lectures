package com.sample.demo;

import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;

@Controller
public class Work {

	@GetMapping("/")
	public String s()
	{
		return "sdf";
	}
}
