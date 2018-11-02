/*******************************************************************************************
* Programmer: Marco Arceo
* Class: CptS 122, Spring 2018; Lab Section
* Programming Assignment: PA6
* Due Date: March, 25th, 2018
* Description: Attendance Tracker
* Sources: Some of the code was inspired by Lab classmates (Travis and Dibble) mainly importing since i had never used getline()
*******************************************************************************************/

#include "Node.h"
#include <windows.h>
#include <iostream>
#include <string>
#include <fstream>
#include <ostream>

using std::ifstream;
using std::fstream;
using std::ofstream;
using std::getline;
using std::stoi;

class masterList
{
public:
	// These run the main program
	masterList();
	void importList(ifstream &file);
	void loadList(ifstream &file);
	void storeList(ofstream &file);
	void markAbsence();
	void generateReport();

private:
	Node *mpHead;
};
