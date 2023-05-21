package com.example.student.repo;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;

import com.example.student.model.Student;

public interface StudentRepo extends JpaRepository<Student,Integer> {
	
	
	List<Student> findBySubjectName(String subjectName);
}
