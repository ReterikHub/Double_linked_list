#pragma once
#include <string>
#include <iostream>

struct node
{
	int data;
	struct node* next;
	struct node* prev;
};

class linkedList
{
public:

	struct node* first;
	linkedList() { first = NULL; };
	
	void createList(int value);
	void insertStart(int value);
	void deleteIn(int value);
	void insertAfter(int value, int prevValue);
	void displayForward();
	void displayBackward();

	
};

