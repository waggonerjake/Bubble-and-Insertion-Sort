//Honor Pledge:
//I pledge that I have neither given nor
//received any help on this assignment.
//jwaggon

#ifndef BUBBLE_H
#define BUBBLE_H

#include "Sort.h"

class BubbleSort : public Sort
{
	///Create methods and inherit override the sort method
	public:
		BubbleSort();
		~BubbleSort();
		virtual void sort(int Numbers[]);
};

#endif
