#include "Node.h"

// constructor - "constructs" a ListNode; initializes the object
Node::Node(int newRecord, int newidNumber, string newName, string newEmail, string newCredits, string newProgram, string newLevel)
{
	record = newRecord;
	idNumber = newidNumber;
	name = newName;
	email = newEmail;
	credits = newCredits;
	program = newProgram;
	level = newLevel;
	mpNext = nullptr;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////
int Node::getRecord() const
{
	return record;
}

int Node::getidNumber() const
{
	return idNumber;
}

string Node::getName() const
{
	return name;
}

string Node::getEmail() const
{
	return email;
}

string Node::getCredits() const
{
	return credits;
}

string Node::getProgram() const
{
	return program;
}

string Node::getLevel() const
{
	return level;
}

Node * Node::getNextPtr() const
{
	return mpNext;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////////////////////////////////////////////////
void Node::setRecord(int newRecord)
{
	record = newRecord;
}

void Node::setidNumber(int newidNumber)
{
	idNumber = newidNumber;
}

void Node::setName(string newName)
{
	name = newName;
}

void Node::setEmail(string newEmail)
{
	email = newEmail;
}

void Node::setCredits(string newCredits)
{
	credits = newCredits;
}

void Node::setProgram(string newProgram)
{
	program = newProgram;
}

void Node::setLevel(string newLevel)
{
	level = newLevel;
}

void Node::setNextPtr(Node * const pNewNext)
{
	mpNext = pNewNext;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////