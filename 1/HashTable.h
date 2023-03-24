#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class HashTable
{
public:
	HashTable();
	~HashTable();
	int SearchValue(string key);
	void Push(string key, int value);
	void Delete(string key);
	void Print();
private:
	vector<string> keys;
	vector<int> values;
	int size = 0;
	int iter = -1;
	void SearchIter(int& iter,string key);
};