/*
KAHLIL BELLO
DATA STRUCTURES
SEPT 26, 2018
PROJ 4 PROB 1
*/
#include <iostream>
#include <string>
#include "STACKPAC.h"

using namespace std;

int main()
{
	int a[7] = {5,9,7,6,2,3};
	char c[5] = {'e','o','a','i','u'};
	string months[12] = {"Jan", "Feb", "Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

	STACK<int, 7> NUM;
	STACK<char, 5> CHAR;
	STACK<string, 12> MONTH;

	NUM.clearStack();
	CHAR.clearStack();
	MONTH.clearStack();

	cout << "Outputting integers in order they came out:\n";
	for (int i = 0; i < 6; ++i)
	{
		cout << a[i] << " ";
		NUM.pushStack(a[i]);
	}
	cout << "\nOutputting integers in REVERSED ORDER:\n";

	while (!NUM.emptyStack())
	{
		int num = NUM.popStack();
		cout << num << " ";
	}
	cout << "\n__________________________\n";
	//-------------CHARACTERS----------------------
	cout << "Outputting characters in order they came out:\n";
	for (int i = 0; i < 5; ++i)
	{
		cout << c[i] << " ";
		CHAR.pushStack(c[i]);
	}
	cout << "\nOutputting characters in REVERSED ORDER:\n";

	while (!CHAR.emptyStack())
	{
		char chr = CHAR.popStack();
		cout << chr << " ";
	}
	cout << "\n__________________________\n";
	//--------------STRINGS-------------------
	cout << "Outputting string in order they came out:\n";
	for (int i = 0; i < 12; ++i)
	{
		cout << months[i] << " ";
		MONTH.pushStack(months[i]);
	}
	cout << "\nOutputting string in REVERSED ORDER:\n";
	while (!MONTH.emptyStack())
	{
		string str = MONTH.popStack();
		cout << str << " ";
	}
	cout << "\n__________________________\n";

	system("pause");
	return 0;
}//end main

/*
OUTPUT: 
Outputting integers in order they came out:
5 9 7 6 2 3
Outputting integers in REVERSED ORDER:
3 2 6 7 9 5
__________________________
Outputting characters in order they came out:
e o a i u
Outputting characters in REVERSED ORDER:
u i a o e
__________________________
Outputting string in order they came out:
Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec
Outputting string in REVERSED ORDER:
Dec Nov Oct Sep Aug Jul Jun May Apr Mar Feb Jan
__________________________
Press any key to continue . . .

*/