//Honor Pledge:
//I pledge that I have neither given nor
//received any help on this assignment.
//jwaggon

#ifndef INSERTION_H
#define INSERTION_H
#include "Sort.h"

class InsertionSort : public Sort
{
	///Defining methdos and overriding sort method
	public:
		InsertionSort();
		~InsertionSort();
		virtual void sort(int Numbers[]);		

};
#endif
