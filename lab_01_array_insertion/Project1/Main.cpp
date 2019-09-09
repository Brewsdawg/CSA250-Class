/*
	(name header)
*/

#include <iostream>
using namespace std;

const int CAPACITY = 10;

// Declaration function insertAtIndex
// Your code here...
void insertAtIndex(int arr[], int& numOfElements, int insert, const int index);
#include "Testing.hxx"

int main( )
{
	testCases();

	cout << endl;
	system("Pause");
    return 0;
}

// Definition function insertAtIndex
//Your code here...
void insertAtIndex(int arr[], int& numOfElements, int insert, const int index)
{
	// Error if the array is full.
	if (numOfElements == CAPACITY)
		cout << "Array is full. Cannot insert another element." << endl;

	// Error if the index exceeds the capacity.
	else if (index > CAPACITY)
		cout << "The array cannot have more than "
		<< CAPACITY << " elements." << endl;

	// Error if the index is past the end of the array.
	else if (index > numOfElements)
		cout << "You can only insert contiguous elements in the array." << endl;

	else
	{
		numOfElements++;
		for (int i = index; i <= numOfElements; i++)
		{
			int temp = arr[i];
			arr[i] = insert;
			insert = temp;
		}
	}
}