//Honor Pledge:
//I pledge that I have neither given nor
//received any help on this assignment.
//jwaggon

#ifndef SORT_H
#define SORT_H

class Sort
{
	///Pure virtual class definition with the virstual destructor
	public:
		virtual void sort(int Numbers[]) = 0;
		//Must define it here or else it would
		//need a .cpp file
		virtual ~Sort()
		{

		}
};
#endif
