#pragma once

template <typename T>
struct Node
{
	T data;
	Node* next;

	Node(T value)
	{
		data = value;
		next = nullptr;
	}
};

template <typename T>
class LinkedList
{
	T* head;
	Node* tail;

public:
	LinkedList();
	
	~LinkedList();

	void Insert(const int& value);
	//void display();
	int pop(const int& value);
};

