#include <iostream>
#include "HashTable.h"

using namespace std;

int main()
{
    HashTable table;
    table.Push("a", 20);
    table.Push("b", 18);
    cout << table.SearchValue("a") << endl;
    table.Delete("A");
    table.Delete("a");
    table.Print();
}
