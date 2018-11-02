
/*******************************************************************************************
* Programmer: Marco Arceo
* Class: CptS 122, Spring 2018; Lab Section
* Programming Assignment: PA6
* Due Date: March, 25th, 2018
* Description: Attendance Tracker
* Sources: N/A
*******************************************************************************************/
#include "masterList.h"

class Wrapper
{
public:
	Wrapper()
	{ // got help with this in lab to initialize it
		list = new masterList();
	}

	void Wrapper::runApp()
	{ // Used the same menu outline as my previous PA 4
		bool flag = true;
		int option = 0;
		ifstream masterlist;
		ofstream classlist;

		while (flag)
		{
			do
			{
				cout << "Make sure to load the attendance list before closing!" << endl;
				cout << "Options 4 and 5 are empty and 6 only displays the submenu and first option\n" << endl;
				option = determineOption();
				switch (option)
				{
				case 1:
					masterlist.open("Attendance.txt");
					list->importList(masterlist);
					masterlist.close();
					break;

				case 2:
					masterlist.open("Attendance.txt");
					list->loadList(masterlist);
					masterlist.close();
					break;

				case 3:
					classlist.open("Text.txt");
					list->storeList(classlist);
					classlist.close();
					break;

				case 4:
					cout << "Option currently unavailable..." << endl;
					Sleep(2000);
					break;

				case 5:
					cout << "Option currently unavailable..." << endl;
					Sleep(2000);
					break;

				case 6:
					list->generateReport();
					break;

				case 7:
					classlist.open("Text.txt");
					list->storeList(classlist);
					classlist.close();
					cout << "Goodbye!" << endl;
					Sleep(3000);
					flag = false;
					break;
				}
				system("cls");
			} while (option > 0 && option < 7);
		}
	}

private:
	masterList *list;

	void Wrapper::displayMenu()
	{ // Displays the menu
		cout << "1.) Import Course List (Imports the list more than once??)" << endl;
		cout << "2.) Load Master List (Loads the master list into nodes)" << endl;
		cout << "3.) Store Master List (Stores it into a new text file)" << endl;
		cout << "4.) Mark Absences (Not finished)" << endl;
		cout << "5.) Edit Absences (Not finished)" << endl;
		cout << "6.) Generate Report (Has a submenu and does the first option)" << endl;
		cout << "7.) Exit (Stores data before exiting, please import first)" << endl;
	}

	int Wrapper::getOption()
	{ // Gets the users option
		int option = 0, status = 0;
		cout << "\nEnter your option: ";
		cin >> option;
		status = option;
		if (status = 0)
		{
			cout << "Failed at reading the option" << endl;
		}
		return option;
	}

	int Wrapper::determineOption()
	{ // Determines if the option is valid
		int option = 0;

		do
		{
			displayMenu();
			option = getOption();
			system("cls");
		} while ((option < 1) || (option > 7));

		return option;
	}
};