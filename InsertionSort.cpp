//Honor Pledge:
//I pledge that I have neither given nor
//received any help on this assignment.
//jwaggon

#include "InsertionSort.h"
#include <iostream>
#include <algorithm>

///Default
InsertionSort::InsertionSort()
{
	
}

///Default Destructor
InsertionSort::~InsertionSort()
{
	
}

///Sorting algorithm
void InsertionSort::sort(int Numbers[])
{
	int arrayLength = 50;
	int startingCounter = 0;

	//End while if counter reaches end of array
	while(startingCounter < arrayLength-1)
	{
		//Set a new variable equal to our counter/current index
		int currentIndex = startingCounter;

		//Check to make sure our new variable is positive, and check if 
		//our current number is greater than the number in front of it
		while(currentIndex >= 0 && Numbers[currentIndex] > Numbers[currentIndex+1])
		{
			//if the condition is met, swap the two numbers' positions
			std::swap(Numbers[currentIndex+1],Numbers[currentIndex]);
			currentIndex--;	
		}
		startingCounter++;
	}
}
