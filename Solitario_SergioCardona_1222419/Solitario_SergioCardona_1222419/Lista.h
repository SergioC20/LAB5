#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>

class Lista
{
	struct Node
	{
		int data;

		Node* next;
	}node;

private:

	Node* header = nullptr;


public:

	void Add(int item);

	void Clear();

	int Count();

	bool Contains(int item);

	int IndexOf(int item);

	void Insert(int index, int item);

	int GetItem(int index);

	void SetItem(int index, int item);

	int LastIndexOF(int item);

	bool Remove(int item);

	void RemoveAt(int index);
};

