/*
KAHLIL BELLO
DATA STRUTURES
SEPTEMBER 19, 2018
project 3 prob 2
*/

#include <iostream>
#include <ctime>
#include "STACKPAC.h"

using namespace std;

int main()
{
	srand(time(0));
	//i.) CREATE STACK ALL
	STACK <int, 10> ALL;
	STACK <int, 10>EVEN;
	STACK <int, 10>tempEVEN;
	STACK <int, 10>ODD;
	STACK <int, 10>tempODD;

	ALL.clearStack();
	EVEN.clearStack();
	ODD.clearStack();
	tempEVEN.clearStack();
	tempODD.clearStack();

	int n;
	for (int i = 1; i <= 10; ++i)
	{
		//ii.) STORE 10 RANDOM NUMBERS <=50 IN STACK ALL
		n = rand() % 50+1;
		ALL.pushStack(n);
	}

	cout << "Stack ALL: ";
	while (!ALL.emptyStack())
	{
		//iii.) DISPLAY STACK ALL AND COLLECT EVEN AND ODD IN STACKS
		int x = ALL.popStack();
		cout << x << " ";

		if ((x % 2) == 0)
		{
			EVEN.pushStack(x);
		}
		else
		{
			ODD.pushStack(x);
		}
	}//endwhile

	//iv.) DISPLAY BOTH STACK EVEN and ODD AS DISPLAYED ON PAPER
	cout << "\n\nDisplaying EVEN and ODD in REVERSED" << endl;
	cout << "EVEN numbers: ";
	while (!EVEN.emptyStack())
	{
		int xEven = EVEN.popStack();
		tempEVEN.pushStack(xEven);
		cout << xEven << " ";
	}

	cout << endl;
	cout << "ODD numbers: ";
	while (!ODD.emptyStack())
	{
		int xOdd = ODD.popStack();
		tempODD.pushStack(xOdd);
		cout << xOdd << " ";
	}

	//iv.) DISPLAY BOTH STACK EVEN and ODD AS DISPLAYED ON PAPER
	cout << "\n\nDisplaying EVEN and ODD in ORDER they CAME OUT" << endl;
	cout << "EVEN numbers in ORDER: ";
	while (!tempEVEN.emptyStack())
	{
		int xEven = tempEVEN.popStack();
		cout << xEven << " ";
	}

	cout << endl;
	cout << "ODD numbers in ORDER: ";
	while (!tempODD.emptyStack())
	{
		int xOdd = tempODD.popStack();
		cout << xOdd << " ";
	}
	cout << "\n\n";

	system("pause");
	return 0;
}
/*
OUTPUT1:
Stack ALL: 37 20 29 40 50 18 1 39 13 34

Displaying EVEN and ODD in REVERSED
EVEN numbers: 34 18 50 40 20
ODD numbers: 13 39 1 29 37

Displaying EVEN and ODD in ORDER they CAME OUT
EVEN numbers in ORDER: 20 40 50 18 34
ODD numbers in ORDER: 37 29 1 39 13

Press any key to continue . . .


OUTPUT2:
Stack ALL: 22 11 14 23 7 49 50 16 9 10

Displaying EVEN and ODD in REVERSED
EVEN numbers: 10 16 50 14 22
ODD numbers: 9 49 7 23 11

Displaying EVEN and ODD in ORDER they CAME OUT
EVEN numbers in ORDER: 22 14 50 16 10
ODD numbers in ORDER: 11 23 7 49 9

Press any key to continue . . .


*/