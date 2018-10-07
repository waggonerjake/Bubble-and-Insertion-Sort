//Honor Pledge:
//I pledge that I have neither given nor
//received any help on this assignment.
//jwaggon

#include <iostream>
#include <string>
#include "Driver.h"
#include <sstream>
#include <fstream>
#include "InsertionSort.h"
#include "BubbleSort.h"

///Method Declaration
void showSecondaryMenu();
void setKeepGoing(bool run);
bool geKeepGoing();
void loadFile();
void showStartMenu();
void InsertSort();
void BubSort();

///To print out the beginning menu
void Driver::showStartMenu()
{
	std::cout << "1. Load Integers (From File)" << std::endl;
	std::cout << "2. Exit Program" << std::endl;
}

///To load in the numbers from the file
void Driver::loadFile()
{
	std::cout << "\nUnsorted Numbers: ";
	
	///Opens the file
	std::ifstream file ("data.txt");
	std::string line;
	
	///Sets the string equal to the WHOLE line in the file
	std::getline(file,line);

	///Passes the line into the stream
	std::stringstream ss;
	ss << line;

	int numberChecker;
	int counter = 0;

	///Return the number until it
	//hits a comma (since we cant convert a comma
	//to an integer)
	while(ss >> numberChecker)
	{	
		///Set index in array to the number that was spit out of the stream
		startingNums[counter] = numberChecker;
		///Once we store the number in the array, ignore the next
		///character (the comma) since I didnt use the delimiter
		ss.ignore();
		counter++;
	}

	for(int i =0; i < 50; i++)
	{
		///If statement is for formatting, specifically the commas
		if(i < 49)
		{
			std::cout << startingNums[i]<< ", ";
		}
		else
		{
			std::cout << startingNums[i] << std::endl;	
		}
	}

	std::cout<<"\n";

	///Check to see if there are any issues with the file
	if(!file.good())
	{
		std::cout << "\nIO Exception! Ending the program now...\n" << std::endl;
		setKeepGoing(false);
	}
	
	file.close();
	showSecondaryMenu();
}

///To print out the secondary menu
void Driver::showSecondaryMenu()
{
	if(getKeepGoing())
	{
		while(true)
		{
			std::string selection;
			std::cout << "1. Insertion Sort" << std::endl;
			std::cout << "2. Bubble Sort" << std::endl;
			std::cout << "3. Exit Program" << std::endl;
			std::cout << "Please enter your selection: ";
			std::cin >> selection;
			if(selection == "1")
			{
				std::cout << "\nInsertion Sort: " << std::endl;
				InsertSort();
				for(int i =0; i < 50; i++)
				{
					if(i < 49)
					{
						std::cout << startingNums[i]<< ", ";
					}
					else
					{
						std::cout << startingNums[i] << std::endl;	
					}
				}
				std::cout << "\n";
				break;
			}
			else if(selection == "2")
			{
				std::cout << "\nBubble Sort: " << std::endl;
				BubSort();
				for(int i =0; i < 50; i++)
				{
					if(i < 49)
					{
						std::cout << startingNums[i]<< ", ";
					}
					else
					{
						std::cout << startingNums[i] << std::endl;	
					}
				}
				std::cout << "\n";
				break;
			}
			else if(selection == "3")
			{
				std::cout << "\nGoodbye!\n" << std::endl;
				setKeepGoing(false);
				break;
			}
			else
			{
				std::cout << "\nPlease enter a valid Selection!\n" << std::endl;
			}
		}
	}
}

///Call the insertion sort
void Driver::InsertSort()
{
	Sort * ISort = new InsertionSort();
	ISort->sort(startingNums);
	delete ISort;
}

///Call the bubble sort
void Driver::BubSort()
{
	Sort * BSort = new BubbleSort();
	BSort->sort(startingNums);
	delete BSort;
}

///The constructor
Driver::Driver()
{
	setKeepGoing(true);
	startingNums = new int[50];
}

///Destructor
Driver::~Driver()
{
	delete[] startingNums;
}

///A getter to end the program at any menu
//@param, bool run for changing the loop condition
void Driver::setKeepGoing(bool run)
{
	keepGoing = run;
}

///A setter to end the program at any menu
bool Driver::getKeepGoing()
{
	return keepGoing;
}

///Main method to run the program
int main()
{
	///Create an instance of the driver class 
	///placed on the heap to call methods outside of main
	Driver * driver = new Driver();
	
	std::string selection;
	while(driver->getKeepGoing())
	{
		driver->showStartMenu();
		std::cout << "Please enter your selection: ";
		std::cin >> selection;  	
		if(selection == "1")
		{
			driver->loadFile();
		}	
		else if(selection == "2")
		{
			std::cout << "\nGoodbye!\n" << std::endl;
			driver->setKeepGoing(false);
		}
		else
		{
			std::cout << "\nPlease enter a valid option!\n" << std::endl;
		}
	}
	delete driver;
	return 0;

}
