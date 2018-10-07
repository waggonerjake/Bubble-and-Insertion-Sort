//Honor Pledge:
//I pledge that I have neither given nor
//received any help on this assignment.
//jwaggon

#ifndef DRIVER_H
#define DRIVER_H

class Driver
{
	///Defining varibales and methods
	private:
		bool keepGoing;
		
		int * startingNums;
	public:

		Driver();

		~Driver();
		
		int main();
		
		void loadFile();

		void showStartMenu();

		void showSecondaryMenu();

		void setKeepGoing(bool run);
		
		bool getKeepGoing();
	
		void InsertSort();

		void BubSort();
};
#endif
