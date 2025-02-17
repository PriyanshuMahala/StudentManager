#pragma once


struct Node
{
	int data;
	Node* next;

	Node(int value)
	{
		data = value;
		next = nullptr;
	}
};

class LinkedList
{
	Node<>* head;
	Node* tail;

public:
	LinkedList();
	
	~LinkedList();

	void Insert(const int& value);
	//void display();
	int pop(const int& value);
};

