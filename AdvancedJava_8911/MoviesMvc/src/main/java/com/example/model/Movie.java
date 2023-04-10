package com.example.model;


public class Movie {
	
	private int movieId;
	private String movieName;
	private double movieRating;
	private String moviePoster;
	private String movieDescciption;
	
	public Movie() {
		super();
	}
	public Movie(int movieId, String movieName, double movieRating, String moviePoster, String movieDescciption) {
		super();
		this.movieId = movieId;
		this.movieName = movieName;
		this.movieRating = movieRating;
		this.moviePoster = moviePoster;
		this.movieDescciption = movieDescciption;
	}
	public int getMovieId() {
		return movieId;
	}
	public void setMovieId(int movieId) {
		this.movieId = movieId;
	}
	public String getMovieName() {
		return movieName;
	}
	public void setMovieName(String movieName) {
		this.movieName = movieName;
	}
	public double getMovieRating() {
		return movieRating;
	}
	public void setMovieRating(double movieRating) {
		this.movieRating = movieRating;
	}
	public String getMoviePoster() {
		return moviePoster;
	}
	public void setMoviePoster(String moviePoster) {
		this.moviePoster = moviePoster;
	}
	public String getMovieDescciption() {
		return movieDescciption;
	}
	public void setMovieDescciption(String movieDescciption) {
		this.movieDescciption = movieDescciption;
	}
	
	
}
