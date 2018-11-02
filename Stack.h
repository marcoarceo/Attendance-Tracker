/*******************************************************************************************
* Programmer: Marco Arceo
* Class: CptS 122, Spring 2018; Lab Section
* Programming Assignment: PA6
* Due Date: March, 25th, 2018
* Description: Attendance Tracker
* Sources: Used O'Fallons class code and what i remembered from Stack functions
*******************************************************************************************/
#include "stackNode.h"

class Stack
{
public:
	Stack(stackNode *topNode = nullptr);

	// Stack Functions from O'Fallon class code and my notes
    stackNode *& Pop();
	stackNode * Peek();
	bool Push(stackNode *&newdata);
	bool isEmpty();

private:
	stackNode *mpTop;
};