package com.example.student;

import java.lang.StackWalker.Option;
import java.util.List;
import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.HttpStatusCode;
import org.springframework.http.ResponseEntity;
import org.springframework.stereotype.Controller;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.ResponseBody;
import org.springframework.web.servlet.ModelAndView;

import com.example.student.model.Student;
import com.example.student.repo.StudentRepo;

@Controller
public class HomeController {

	@Autowired
	StudentRepo repo;
	
	@GetMapping("/")
	public ModelAndView homePage()
	{
		List<Student> list = repo.findAll();
		
		for(Student s: list)
		{
			System.out.println(s.getStudentName());
		}
		ModelAndView mv	= new ModelAndView("index.jsp");
		mv.addObject("username","gk");
		mv.addObject("list",list);
		
		return mv;
	}
	
	@GetMapping("/api/students")
	@ResponseBody
	public List<Student> userPage()
	{
		return repo.findAll();
	}
	
	@GetMapping("/api/students/{studentId}")
	@ResponseBody
	public Optional<Student> userPage(@PathVariable("studentId") int studentId)
	{
		return repo.findById(studentId);
	}
	
	@GetMapping("/api/subject/{subjectName}")
	@ResponseBody
	public List<Student> getBySubjectName(@PathVariable("subjectName") String subjectName)
	{
		return repo.findBySubjectName(subjectName);
	}
	
	@GetMapping("/you")
 
	public ModelAndView add_new_student()
	{
		System.out.println("HelloWofnvkjdb");
		return new ModelAndView("addStudent.jsp");
	}
	@PostMapping("/add2")
	@ResponseBody
	public String addStudent(Student s)
	{
		Student sr= repo.save(s);
//		r "data saved.. "+s.getStudentName();
		return sr.getStudentName();
//		System.out.println("student name "+s.getStudentName());
//		return ResponseEntity.status(HttpStatus.CREATED).body(repo.save(s));
	}

}
