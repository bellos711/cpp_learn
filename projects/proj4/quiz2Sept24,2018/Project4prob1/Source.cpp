/*
KAHLIL BELLO
DATA STRUCTURES
OCT 10, 2018
EXTRA
*/
#include <iostream>
#include "STACKPAC.h"
#include <string>

using namespace std;

int main()
{
	
	int a[5] = {9,3,2,8,10};
	string days[7] = {"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};
	/*write a program to use pointer implementation of stack and 
	queue to display array a in reverse order and days in same order*/

	//---------------STACK NUMBERS------------------------
	cout << "DISPLAYING NUMBERS {9,3,2,8,10} IN REVERSE ORDER\n";
	STACK_PTR<int> NUMBERS;
	for (int i = 0; i < 5; i++)
	{
		NUMBERS.push_s(a[i]);
	}//end forloop
	//display NUMBERS
	while (!NUMBERS.empty_s())
	{
		int r = NUMBERS.pop_s();
		cout << r << "->";
	}//endwhile
	cout << "NULL" << endl;

	//-----------------QUEUE DAYS----------------------
	cout << "\nDISPLAYING DAYS OF THE WEEK IN ORDER\n";
	QUEUE_PTR<string> DAYS;
	for (int i = 0; i < 7; i++)
	{
		DAYS.push_q(days[i]);
	}//end forloop
	//display DAYS
	while (!DAYS.empty_q())
	{
		string d = DAYS.pop_q();
		cout << d << "->";
	}//endwhile
	cout << "NULL" << endl;

	system("pause");
	return 0;
}

/*
OUTPUT:
DISPLAYING NUMBERS {9,3,2,8,10} IN REVERSE ORDER
10->8->2->3->9->NULL

DISPLAYING DAYS OF THE WEEK IN ORDER
Mon->Tue->Wed->Thu->Fri->Sat->Sun->NULL
Press any key to continue . . .

*/

