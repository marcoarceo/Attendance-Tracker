/*******************************************************************************************
* Programmer: Marco Arceo
* Class: CptS 122, Spring 2018; Lab Section
* Programming Assignment: PA6
* Due Date: March, 25th, 2018
* Description: Attendance Tracker
* Sources: N/A
*******************************************************************************************/
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class stackNode
{
public:
	stackNode(string newDate = "");

	// Getters
	string getDate() const;
	stackNode * getNext() const;

	// Setters
	void setDate(string newDate);
	void setNext(stackNode *pNewNext);

private:
	string date;
	stackNode *mpNext;
};
