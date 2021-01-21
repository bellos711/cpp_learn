#include <iostream>
#include "HASH.h"
#include <string>
using namespace std;



int main()
{
	struct MONTH
	{
		string name;
		int days;
	};//end struct month

	//int a[9] = { 7,10,13,19,14,20,33,44,15 };
	MONTH month[12] = { {"JAN",31},{"FEB",28},{"MAR", 31},{"APR",30},{"MAY",31},{"JUN",30},{"JUL",31},{"AUG",31},{"SEP",30},{"OCT",31},{"NOV",30},{"DEC",31} };

	HASHEN h;
	h.clearHashTable();
	for (int i = 0; i < 12; ++i)
	{
		h.push(month[i].name, month[i].days);
	}//endfor
	
	h.displayH();
	//---we want to search an item
	cout << "//---------------------------------------------\n";
	string item;
	char again = 'y';
	do {
		cout << "Enter the value of an item you want to search: ";
		cin >> item;

		h.search(item);
		cout << "Would you like to search another item? ";
		cin >> again;
	} while (again=='y' || again=='Y');
	system("pause");
	return 0;
}
