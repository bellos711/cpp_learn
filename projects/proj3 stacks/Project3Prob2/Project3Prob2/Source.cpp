/*
KAHLIL BELLO
DATA STRUTURES
SEPTEMBER 19, 2018
project 3 prob 2
*/

#include <iostream>
#include <ctime>

using namespace std;

class STACK
{
private:
	int a[10];
	int counter;

public:
	void clearStack()
	{
		counter = 0;
	}//end clearStack

	bool emptyStack()
	{
		return (counter == 0) ? true : false;
	}//end emptyStack

	bool fullStack()
	{
		return (counter == 10) ? true : false;
	}//end fullStack

	void pushStack(int x)
	{
		a[counter] = x;
		counter++;
	}//end pushStack

	int popStack()
	{
		counter--;
		return a[counter];
	}//end popStack
};//end class STACK

int main()
{
	srand(time(0));
	STACK S;
	STACK EVEN;
	STACK ODD;
	S.clearStack();
	EVEN.clearStack();
	ODD.clearStack();

	int n;
	for (int i = 1; i <= 10; ++i)
	{
		n = rand() % 99 + 1;
		S.pushStack(n);
	}
	

	cout << "All numbers: ";
	while (!S.emptyStack())
	{
		int x = S.popStack();
		cout << x << " ";

		if ((x % 2) == 0)
		{
			EVEN.pushStack(x);
		}
		else
		{
			ODD.pushStack(x);
		}
	}
	//##########################################
	cout << endl;
	cout << "EVEN numbers: ";
	while (!EVEN.emptyStack())
	{
		int xEven = EVEN.popStack();
		cout << xEven << " ";
	}
	//##########################################
	cout << endl;
	cout << "ODD numbers: ";
	while (!ODD.emptyStack())
	{
		int xOdd = ODD.popStack();
		cout << xOdd << " ";
	}
		
	cout << "\n\n";
	system("pause");
	return 0;
}

/*
KAHLIL BELLO
DATA STRUTURES
SEPTEMBER 19, 2018
project 3 prob 2

OUTPUT Test 1:
All numbers: 72 8 74 97 85 45 43 75 10 55
EVEN numbers: 10 74 8 72
ODD numbers: 55 75 43 45 85 97

Press any key to continue . . .

OUTPUT Test 2:
All numbers: 68 58 51 64 38 94 33 56 68 74
EVEN numbers: 74 68 56 94 38 64 58 68
ODD numbers: 33 51

Press any key to continue . . .

*/
