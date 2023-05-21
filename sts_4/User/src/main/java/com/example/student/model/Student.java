package com.example.student.model;

import jakarta.persistence.Entity;
import jakarta.persistence.Id;

@Entity
public class Student {

	@Id
	private int studentRollNo;
	private String studentName;
	private String subjectName;
	private double subjectMarks;
	
	public int getStudentRollNo() {
		return studentRollNo;
	}
	public void setStudentRollNo(int studentRollNo) {
		this.studentRollNo = studentRollNo;
	}
	public String getStudentName() {
		return studentName;
	}
	public void setStudentName(String studentName) {
		this.studentName = studentName;
	}
	public String getSubjectName() {
		return subjectName;
	}
	public void setSubjectName(String subjectName) {
		this.subjectName = subjectName;
	}
	public double getSubjectMarks() {
		return subjectMarks;
	}
	public void setSubjectMarks(double subjectMarks) {
		this.subjectMarks = subjectMarks;
	}
	@Override
	public String toString() {
		return "Student [studentRollNo=" + studentRollNo + ", studentName=" + studentName + ", subjectName="
				+ subjectName + ", subjectMarks=" + subjectMarks + "]";
	}
	public Student(int studentRollNo, String studentName, String subjectName, double subjectMarks) {
		super();
		this.studentRollNo = studentRollNo;
		this.studentName = studentName;
		this.subjectName = subjectName;
		this.subjectMarks = subjectMarks;
	}
	public Student() {
		super();
	}
	
	
}
