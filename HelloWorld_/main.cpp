#include <iostream>
#include "LinkedList.hpp"


int main()
{
	auto My_Linked_List = new LinkedList();

	My_Linked_List->Insert(20);

	My_Linked_List->Insert(2340);

	My_Linked_List->pop(2340);


	My_Linked_List->display();
	delete My_Linked_List;
}
 