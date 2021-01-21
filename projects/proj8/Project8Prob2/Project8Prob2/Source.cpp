#include <iostream>
#include "HASH.h"
using namespace std;

struct MONTH
{
	string name; 
	int days;
};//end struct month
MONTH month[12] = { {"JAN",31},{"FEB",28},{"MAR", 31},{"APR",30},{"MAY",31},{"JUN",30},{"JUL",31},{"AUG",31},{"SEP",30},{"OCT",31},{"NOV",30},{"DEC",31} };

int main()
{
	int a[9] = { 7,10,13,19,14,20,33,44,15 };
	HASHEN h; 
	h.clearHashTable();
	for (int i = 0; i < 9; ++i)
	{
		h.push(a[i]);
	}//endfor

	h.displayH();
	//---we want to search an item
	int item;
	cout << "Enter the value of item you wanat to search: ";
	cin >> item;

	h.search(item);

	system("pause");
	return 0;
}