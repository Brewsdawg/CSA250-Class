/*
	Brewington, Brent

	September 6, 2019

	CS A250
	Lab 2
*/

#include "Movie.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int year = 0;
	string title;

	Movie movie1("Total Recall", 1990);
	Movie movie2;

	cout << "Pick a movie: ";
	cin >> title;
	movie2.setTitle(title);

	cout << "Enter the year it released: ";
	cin >> year;
	movie2.setYear(year);
	cout << endl;

	cout << "Your choice: ";
	cout << movie2.getTitle() << ", " << movie2.getYear() << endl;
	cout << endl;

	cout << "Did your movie release the same year as my pick?" << endl;
	cout << movie1.sameYear(movie2) << endl;
	cout << endl;

	cout << "My movie: ";
	movie1.print();

	system("pause");
}