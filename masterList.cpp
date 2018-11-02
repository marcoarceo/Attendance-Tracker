
#include "masterList.h"

masterList::masterList()
{
	mpHead = nullptr;
}

void masterList::importList(ifstream &file)
{ // Got some help in Lab from Dibble and Travis

	int record = 0, idNumber = 0, index = 0;
	string fullname = "", email = "", credits = "", major = "", year = "", data = "";

	
	//getline(file, data, '\n');
	while (!file.eof())
	{
		Node * list = new Node();

		// Record Number
		getline(file, data, ',');
		list->setRecord(stoi(data));
		cout << data << endl;

		// ID number
		getline(file, data, ',');
		list->setidNumber(stoi(data));
		cout << data << endl;

		// Name
		getline(file, data, '"');
		getline(file, data, '"');
		list->setName(data);
		cout << data << endl;

		// Email
		getline(file, data, ',');
		getline(file, data, ',');
		list->setEmail(data);
		cout << data << endl;

		// Credits
		getline(file, data, ',');
		list->setCredits(data);
		cout << data << endl;

		//Program
		getline(file, data, ',');
		list->setProgram(data);
		cout << data << endl;

		// Year
		getline(file, data, '\n');
		list->setLevel(year);
		cout << data << endl;

		// Inserts the data into the linked list
		if (mpHead == nullptr)
		{
			mpHead = list;
		}
		else
		{
			list->mpNext = mpHead;
			mpHead = list;
		}

		system("pause");
	}
}

void masterList::loadList(ifstream &file)
{ // Didnt quite understand the purpose of this function
	importList(file);
}

void masterList::storeList(ofstream &file)
{ // Store the contents to another txt file, same method used in previous PA's
	Node *pTemp = NULL;
	pTemp = this->mpHead;

	if (pTemp != NULL)
	{
		while (pTemp != NULL)
		{ // Writes to the file 
			file << pTemp->getRecord() << '\n';
			file << pTemp->getidNumber() << '\n';
			file << pTemp->getName() << '\n';
			file << pTemp->getEmail() << '\n';
			file << pTemp->getCredits() << '\n';
			file << pTemp->getProgram() << '\n';
			file << pTemp->getLevel() << '\n';
			pTemp = pTemp->mpNext;
		}
		cout << "The list has been successfully stored..." << endl;
		Sleep(3000);
	}
}

void masterList::generateReport()
{ // Setup the submenu for this function
	int choice = 0;
	cout << "1.) Generate Report for all students" << endl;
	cout << "2.) Generate Report for students with absences" << endl;
	cout << "Enter your choice: ";
	cin >> choice;

	if (choice == 1) // All students
	{
		while (this->mpHead != NULL)
		{
			cout << mpHead->record << endl;
			cout << mpHead->idNumber << endl;
			cout << mpHead->name << endl;
			cout << mpHead->email << endl;
			cout << mpHead->credits << endl;
			cout << mpHead->program << endl;
			cout << mpHead->level << "\n";

			mpHead = mpHead->getNextPtr();
		}
		cout << "All students have been displayed..." << endl;
		system("pause");
	}
	else if (choice == 2) // Absences
	{
		cout << "Absent Students" << endl;
		Sleep(2000);
	}
	else // User didnt choose 1 or 2
	{
		cout << "Invalid Choice" << endl;
		Sleep(2000);
	}
}