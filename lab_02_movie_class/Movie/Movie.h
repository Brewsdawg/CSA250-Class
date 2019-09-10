/*
	Brewington, Brent

	September 6, 2019

	CS A250
	Lab 2
*/

#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <string>

class Movie
{
public:
	//default
	Movie();

	//overloaded constructor
	Movie(const std::string&, int);

	//declared functions
	std::string getTitle() const;
	int getYear() const;
	void setTitle(const std::string&);
	void setYear(const int&);
	void print() const;
	bool sameYear (const Movie&) const;

	//deconstructor
	~Movie();
private:
	std::string title;
	int year;
};
#endif