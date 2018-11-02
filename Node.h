/*******************************************************************************************
* Programmer: Marco Arceo
* Class: CptS 122, Spring 2018; Lab Section
* Programming Assignment: PA6
* Due Date: March, 25th, 2018
* Description: Attendance Tracker
* Sources: Previous C PA's and some suggestions from Elijiah Craig (My TA) - setters and getters
*******************************************************************************************/
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

class Node
{
	friend class masterList; //(learncpp.com)
public:
	Node(int newRecord = 0, int newidNumber = 0, string newName = "", string newEmail = "",
		string newCredits = "", string newProgram = "", string newLevel = "");    

	// Getters
	int getRecord() const;
	int getidNumber() const;
	string getName() const;
	string getEmail() const;
	string getCredits() const;
	string getProgram() const;
	string getLevel() const;
	Node * getNextPtr() const;
	
	// Setters
	void setRecord(int newRecord);
	void setidNumber(int newidNumber);
	void setName(string newName);
	void setEmail(string newEmail);
	void setCredits(string newCredits);
	void setProgram(string newProgram);
	void setLevel(string newLevel);
	void setNextPtr(Node * const pNewNext);   
	
private:
	int record;
	int idNumber;
	string name;
	string email;
	string credits;
	string program;
	string level;
	Node *mpNext;          
};

//ostream & operator << (ostream &lhs, Node &rhs); // Displays to screen
//std::fstream & operator << (std::fstream &lhs, Node &rhs); // Writes to the file
//std::fstream & operator >> (std::fstream &lhs, Node &rhs); // Reads in from file