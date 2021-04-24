#include "linkedList.h"


void linkedList::createList(int value)
{
	struct node* strct;
	struct node* temp = new struct node;

	temp->data = value;
	temp->next = NULL;

	if (first == NULL)
	{
		temp->prev = NULL;
		first = temp;
	}
	else
	{
		strct = first;
		while (strct->next != NULL)
		{
			strct = strct->next;
		}
		strct->next = temp;
		temp->prev = first;
	}
}

void linkedList::insertStart(int value)
{
	if (first == NULL)
	{
		std::cout << "No list." << std::endl;
		return;
	}

	struct node* temp = new struct node;
	temp->prev = NULL;
	temp->data = value;
	temp->next = first;
	first->prev = temp;
	first = temp;

}

void linkedList::insertAfter(int value, int prevValue)
{
	if (first == NULL)
	{
		std::cout << "No list." << std::endl;
		return;
	}

	struct node* temp = new struct node;
	struct node* temp2;

	temp2 = first;
	

	//checks that the list is large enough
	for (int i = 0; i < prevValue - 1; i++)
	{
		temp2 = temp2->next;
		if (temp2 == NULL)
		{
			std::cout << "Inserted size: " << prevValue << " too large." << std::endl;
			return;
		}
		
	}

	temp->data = value;

	if (temp2->next == NULL)
	{
		temp2->next = temp;
		temp->next = NULL;
		temp->prev = temp2;
	}
	else
	{
		temp->next = temp2->next;
		temp->next->prev = temp;
		temp2->next = temp;
		temp->prev = temp2;
	}
	std::cout << "success!" << std::endl;
}

void linkedList::deleteIn(int value)
{
	struct node* temp;
	struct node* temp2;

	if (first->data = value)
	{
		temp = first;
		first = first->next;
		first->prev = NULL;
		return;
	}

	temp2 = first;

	while (temp2->next->next != NULL)
	{
		if (temp2->next->data == value)
		{
			temp = temp2->next;
			temp2->next = temp->next;
			temp->next->prev = temp2;
			free(temp);
		}
		temp2 = temp2->next;
	}

	if (temp2->next->data == value)
	{
		temp = temp2->next;
		free(temp);
		temp2->next = NULL;
		return;
	}
}

void linkedList::displayForward()
{
	struct node* temp;

	if (first == NULL)
	{
		std::cout << "No list." << std::endl;
		return;
	}	

	temp = first;

	while (temp != NULL)
	{
		std::cout << temp->data << std::endl;
		temp = temp->next;
	}
}

void linkedList::displayBackward()
{
	if (first == NULL)
	{
		std::cout << "No list." << std::endl;
		return;
	}

	struct node* temp;
	temp = first;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	while (temp != NULL)
	{
		std::cout << temp->data << std::endl;
		temp = temp->prev;
	}
}


