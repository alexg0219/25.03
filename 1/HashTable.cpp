#include "HashTable.h"

HashTable::HashTable()
{
}

HashTable::~HashTable()
{
}

int HashTable::SearchValue(string key)
{
	if (size == 0)
		return -1;

	for (int i = 0; i < size; i++)
	{
		if (key == keys[i])
		{
			return values[i];
		}
	}

	return -1;
}

void HashTable::Push(string key, int value)
{
	keys.push_back(key);
	values.push_back(value);
	size++;
}

void HashTable::Delete(string key)
{
	if (size == 0)
		return; 

	SearchIter(iter,key);

	if (iter == -1)
		return;

	keys.erase(keys.cbegin()+iter);
	values.erase(values.cbegin() + iter);
}

void HashTable::Print()
{
	if (size == 0)
		return;

	for (int i = 0; i < size; i++)
		cout << keys[i] << " " << values[i] << endl;
}

void HashTable::SearchIter(int& iter, string key)
{
	if (size == 0)
		iter = -1;

	bool bFlag = 1;

	for (int i = 0; i < size; i++)
	{
		if (key == keys[i])
		{
			iter = i;
			bFlag = 0;
			size--;
			break;
		}
	}

	if (bFlag)
		iter = -1;
}
