package com.sample.demo;

import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.ComponentScan;

@SpringBootApplication
@ComponentScan
public class HelloWorlde3Application {

	public static void main(String[] args) {
		SpringApplication.run(HelloWorlde3Application.class, args);
		System.out.print("Hell of code..............");
	}

}
