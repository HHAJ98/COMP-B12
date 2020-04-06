// A class to represent a node of a linked list
#include <iostream>
using namespace std;

struct node {
	int value;
	node *next;
};

class linkedList {
public:
	linkedList();
	void append(int);
	bool deleteFirstInstanceOf(int);
	void printList();
private:
	node *head;
	node *tail;
};

linkedList::linkedList() {
	head = nullptr;
	tail = nullptr;
}

void linkedList::append(int value) {
	node *newNode = new node;
	newNode->value = value;
	newNode->next = nullptr;

	if (head == nullptr){
		head = newNode;
		tail = newNode;
	} else {
		tail->next = newNode;
		tail = tail->next;
	}
}

bool linkedList::deleteFirstInstanceOf (int value) {
	node *previousNode = head;
	node *currentNode = head;
	
	if (head->value == value) {
		head = head->next;
		delete currentNode;
		return true;
	}

	while (currentNode->next != nullptr && currentNode->value != value){
		previousNode = currentNode;
		currentNode = currentNode->next;
	}

	if (currentNode->value == value) {
		previousNode->next = currentNode->next;
		delete currentNode;
		return true;
	}
	return false;	
}

void linkedList::printList() {
	if (head == nullptr) {
		cout << "Empty List" << endl;
	} else {
		node *currentNode = head;
		cout << "[ ";
		while (currentNode->next != nullptr) {
			cout << currentNode->value << ", ";
			currentNode = currentNode->next;
		}
		cout << currentNode->value << " ]" << endl;
	}
}
