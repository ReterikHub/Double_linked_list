/*
* In this program is a doubly linked list. There are no sorting algorithms due to problems with the methods. 
*/
#include "linkedList.h"

int main()
{

	linkedList* dubbel = new linkedList;
	int decision;
	int value;
	int preValue = 0;

	do
	{
		std::cout << " create list(1) " << std::endl;

		std::cout << "add to start of list (2) " << std::endl;

		std::cout << " add after a spot(3) " << std::endl;

		std::cout << " delete in spot(4) " << std::endl;

		std::cout << " display forwards(5) " << std::endl;

		std::cout << " display backwards(6) " << std::endl;

		std::cout << " quit(0) " << std::endl;

		std::cin >> decision;

		switch (decision)
		{
		case 1:
		{

			std::cout << "give first value of list." << std::endl;
			std::cin >> value;
			dubbel->createList(value);
			break;
		}

		case 2:
		{
			std::cout << "give value to insert" << std::endl;
			std::cin >> value;
			dubbel->insertStart(value);
			break;
		}

		case 3:
		{
			std::cout << "give value to insert and spot" << std::endl;
			std::cin >> value;
			std::cout << "give spot" << std::endl;
			std::cin >> preValue;
			dubbel->insertAfter(value, preValue);
			break;
		}


		case 4:
		{
			std::cout << "give value to delete" << std::endl;
			std::cin >> value, preValue;
			dubbel->deleteIn(value);
			break;
		}
		case 5:
		{
			dubbel->displayForward();
			break;
		}
		case 6:
		{
			dubbel->displayBackward();
			break;
		}
		value = 0;
		preValue = 0;
		} 

	}while (decision != 0);

}
		

