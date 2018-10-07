//Honor Pledge:
//I pledge that I have neither given nor
//received any help on this assignment.
//jwaggon
#include "BubbleSort.h"
#include <algorithm>
#include <iostream>

///Default
BubbleSort::BubbleSort()
{

}

///Default
BubbleSort::~BubbleSort()
{

}

///Sorting algorithm for bubble sort
void BubbleSort::sort(int Numbers[])
{
	int counter = 0;
	
	//Make it go through the whole array 50 times
	while(counter < 50)
	{
		bool swapped = false;

		//Make it check each spot every time
		for(int i = 0; i < 49; i++)
		{	
			if(Numbers[i] > Numbers[i+1])
			{	
				std::swap(Numbers[i],Numbers[i+1]);
				swapped = true;
			}
		}

		//For optimization, if it completes a full pass without swapping
		//any numbers, then its done so end it before doing 
		//unnecessary iterating
		if(!swapped)
		{
			break;
		}
		counter++;
	}
}
