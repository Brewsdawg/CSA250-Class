/*
	Brewington, Brent

	September 6, 2019

	CS A250
	Lab 2
*/

#include "Movie.h"

using namespace std;

//default
Movie::Movie()
{
	year = 0;
}

//overloaded constructor
Movie::Movie(const string& newTitle, int newYear)
{
	title = newTitle;
	year = newYear;
}

//declared functions
string Movie::getTitle() const
{
	return title;
}

int Movie::getYear() const
{
	return year;
}

void Movie::setTitle(const string& newTitle)
{
	title = newTitle;
}

void Movie::setYear(const int& newYear)
{
	year = newYear;
}

void Movie::print() const
{
	// Title(year)
	cout << title << "(" << year << ")" << endl;
}

bool Movie::sameYear(const Movie& movie2) const
{
	return (year == movie2.year);
}

//deconstructor
Movie::~Movie() 
{}