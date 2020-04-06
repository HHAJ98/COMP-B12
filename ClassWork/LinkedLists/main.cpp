/*
Author: Ferraro, AJ
Assignment: Programming Assignment #05
Course: COMP B12
Instructor: Richard Miles
Date submitted: 2020/04/05
*/
#include <string>
#include "LinkedList.h"


void greetUser();

int main() {
	linkedList list;
	bool hasQuit = false;
	string command;
	int value;
	greetUser();
	do {
		cout << ">> ";
		cin >> command;
		if (command == "quit" || command == "q") {
			cout << "Are you sure you want to quit? yes/no" << endl;
			cin >> command;
			if (command == "y" || command == "yes") {
				hasQuit = true;
			} else {
				continue;
			}
		} else if (command == "app" || command == "a") {
			cin >> value;
			list.append(value);
			cout << "List: ";
			list.printList();
		} else if (command == "del" || command == "d") {
			cin >> value;
			//deleteFirstInstanceOf returns false when it cannot find an elemnt to delete, true otherwise.
			if (!list.deleteFirstInstanceOf(value))
				cout << "couldn't find a node with that value, please try another value." << endl;
			cout << "List: ";
			list.printList();
		} else {
			cout << "Invalid command. Please use app, del, quit, or their one-letter equivalents." << endl;
		}
	} while (!hasQuit);
	return 0;
}

void greetUser() {
	string greeting = "Hello! To append a value to the list, type \"app\" followed by the value you wish\n"
	"to append to the list. To delete the first occurance of a given value in the\n"
	"list, type \"del\" followed by the value you wish to delete. Type \"quit\" to exit.\n"
	"eg:\n"
	"app 1\n"
	"del 24\n"
	"quit\n"
	"-------------------------------------------------------------------------------";

	cout << greeting << endl;
}