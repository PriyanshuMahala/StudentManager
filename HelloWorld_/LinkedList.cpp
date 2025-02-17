#include "LinkedList.hpp"

//std
#include <iostream>

LinkedList::LinkedList()
{
	head = nullptr;
	tail = nullptr;
}

LinkedList::~LinkedList(){

	Node* temp;
	while (head != nullptr)
	{
		temp = head;
		head = head->next;
		delete temp;
	}
}

void LinkedList::Insert(const int& value)
{
	auto newNode = new Node(value);
	if (head == nullptr)
	{
		head = tail = newNode;
		return;
	}
	tail->next = newNode;
	tail = newNode;
}

/*void LinkedList::display()
{
	Node* temp = head;
	while (temp != nullptr)
	{
		std::cout << temp->data << std::endl;
		temp = temp->next;
	}
}*/

int LinkedList::pop(const int& value)
{
	Node* current_node = head;
	Node* prevNode = nullptr;
	while (current_node != nullptr)
	{
		if (current_node->data == value)
		{
			if (current_node == head)
			{
				head = current_node->next;
			}
			else
			{
				prevNode->next = current_node->next;
			}
			if (current_node == tail)
			{
				tail = prevNode;
			}
			delete current_node;
			return 0;
		}
		prevNode = current_node; //if value does not equal current_node->data
		current_node = current_node->next;
	}
	return 1;
}