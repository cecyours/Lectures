package com.example.model;

import java.util.Arrays;
import java.util.List;

public class MovieService {
	
	public static List<Movie> getList() {
		
		return Arrays.asList(
				new Movie(1,"Shivam",9.3,"iron_img1.png","Lorem ipsum dolor sit amet consectetur adipisicing elit. Voluptatum sequi corrupti, sit aut vitae praesentium est minus explicabo unde voluptatibus! Rem ullam totam accusamus magni dolorum, dolores quo ratione nostrum.\n"),
				new Movie(2,"Sumit",9.9,"img1","Lorem ipsum dolor sit amet consectetur adipisicing elit. Voluptatum sequi corrupti, sit aut vitae praesentium est minus explicabo unde voluptatibus! Rem ullam totam accusamus magni dolorum, dolores quo ratione nostrum.\n"),
				new Movie(3,"GOTA",3.4,"iron_img1.png","Lorem ipsum dolor sit amet consectetur adipisicing elit. Voluptatum sequi corrupti, sit aut vitae praesentium est minus explicabo unde voluptatibus! Rem ullam totam accusamus magni dolorum, dolores quo ratione nostrum.\n"),
				new Movie(4,"khun",1.3,"img1","Lorem ipsum dolor sit amet consectetur adipisicing elit. Voluptatum sequi corrupti, sit aut vitae praesentium est minus explicabo unde voluptatibus! Rem ullam totam accusamus magni dolorum, dolores quo ratione nostrum.\n"),
				new Movie(5,"Chai",8.3,"iron_img1.png","Lorem ipsum dolor sit amet consectetur adipisicing elit. Voluptatum sequi corrupti, sit aut vitae praesentium est minus explicabo unde voluptatibus! Rem ullam totam accusamus magni dolorum, dolores quo ratione nostrum.\n"),
				new Movie(6,"heavy pulav",10.0,"img1","Lorem ipsum dolor sit amet consectetur adipisicing elit. Voluptatum sequi corrupti, sit aut vitae praesentium est minus explicabo unde voluptatibus! Rem ullam totam accusamus magni dolorum, dolores quo ratione nostrum.\n"),
				new Movie(7,"Biscut",8.3,"img1","Lorem ipsum dolor sit amet consectetur adipisicing elit. Voluptatum sequi corrupti, sit aut vitae praesentium est minus explicabo unde voluptatibus! Rem ullam totam accusamus magni dolorum, dolores quo ratione nostrum.\n"),
				new Movie(8,"papad",9.1,"img1","Lorem ipsum dolor sit amet consectetur adipisicing elit. Voluptatum sequi corrupti, sit aut vitae praesentium est minus explicabo unde voluptatibus! Rem ullam totam accusamus magni dolorum, dolores quo ratione nostrum.\n")				
				);
				
	}
}
