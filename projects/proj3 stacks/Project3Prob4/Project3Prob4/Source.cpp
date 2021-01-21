/*
KAHLIL BELLO
DATA STRUTURES
SEPTEMBER 19, 2018
project 3 prob 4
*/

#include <iostream>
#include <ctime>
#include <string>
#include <cstring>

using namespace std;

//WHEN NOT USING A TEMPLATE STACK CLASS
class STACKint //type int
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
};//end class STACK int type
//########################################################################
class STACKchar //type char
{
private: 
	char a[10];
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

	void pushStack(char x)
	{
		a[counter] = x;
		counter++;
	}//end pushStack

	char popStack()
	{
		counter--;
		return a[counter];
	}//end popStack
};//end class STACK char type
//########################################################################
class STACKstr //type string
{
private:
	string a[10];
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

	void pushStack(string x)
	{
		a[counter] = x;
		counter++;
	}//end pushStack

	string popStack()
	{
		counter--;
		return a[counter];
	}//end popStack
};//end class STACK string type
//##############################################################
//WHEN USING A TEMPLATE FUNCTION FRO STACK CLASS
template<class T, int n>
class STACK
{
private:
	T a[n];//T for typ, n for length
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
		return (counter == n) ? true : false;
	}//end fullStack

	void pushStack(T x)
	{
		a[counter] = x;
		counter++;
	}//end pushStack

	T popStack()
	{
		counter--;
		return a[counter];
	}//end popStack
};//end class STACK


int main()
{
	/*srand(time(0));
	STACKint NUM;
	STACKchar ALPHA;
	STACKstr MONTHS;
	NUM.clearStack();
	ALPHA.clearStack();
	MONTHS.clearStack();

	int n;
	cout << "Numbers: ";
	for (int i = 1; i <= 10; ++i)
	{
		n = rand() % 29;
		NUM.pushStack(n);
	}
	while (!NUM.emptyStack())
	{
		int x = NUM.popStack();
		cout << x << " ";
	}
	cout << endl;
	//#####################UPPERCASE##############################
	cout << "Uppercase Letters: ";
	int m;
	for (int i = 1; i <= 10; ++i)
	{
		m = rand() % 25;
		ALPHA.pushStack(char(65+(m)));
	}
	while (!ALPHA.emptyStack())
	{
		char y = ALPHA.popStack();
		cout << y << " ";
	}
	cout << endl;
	//######################MONTHS#############################
	cout << "Months: ";
	int o;
	string months[12] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
	for (int i = 1; i <= 10; ++i)
	{
		o = rand() % 11;
		MONTHS.pushStack(months[o]);
	}
	while (!MONTHS.emptyStack())
	{
		string z = MONTHS.popStack();
		cout << z << " ";
	}
	cout << endl;*/


	cout << "\n\n\n#########################################\n";
	cout << "Using TEMPLATE class" << endl;
	srand(time(0));
	STACK <int, 10>NUM;
	STACK <char, 10>ALPHA;
	STACK <string, 10>MONTHS;
	NUM.clearStack();
	ALPHA.clearStack();
	MONTHS.clearStack();
	int n;
	cout << "Numbers: ";
	for (int i = 1; i <= 10; ++i)
	{
		n = rand() % 29;
		NUM.pushStack(n);
	}
	while (!NUM.emptyStack())
	{
		int x = NUM.popStack();
		cout << x << " ";
	}
	cout << endl;
	//#####################UPPERCASE##############################
	cout << "Uppercase Letters: ";
	int m;
	for (int i = 1; i <= 10; ++i)
	{
		m = rand() % 25;
		ALPHA.pushStack(char(65 + (m)));
	}
	while (!ALPHA.emptyStack())
	{
		char y = ALPHA.popStack();
		cout << y << " ";
	}
	cout << endl;
	//######################MONTHS#############################
	cout << "Months: ";
	int o;
	string months[12] = { "JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC" };
	for (int i = 1; i <= 10; ++i)
	{
		o = rand() % 11;
		MONTHS.pushStack(months[o]);
	}
	while (!MONTHS.emptyStack())
	{
		string z = MONTHS.popStack();
		cout << z << " ";
	}
	cout << endl;


	system("pause");
	return 0;
}

/*
KAHLIL BELLO
DATA STRUTURES
SEPTEMBER 19, 2018
project 3 prob 4

OUTPUT:
Numbers: 24 28 3 21 28 21 9 26 15 16
Uppercase Letters: D Y M V O O B E U F
Months: OCT JUL AUG JUN FEB NOV SEP AUG OCT JUL
Press any key to continue . . .


OUTPUT WITH TEMPLATE CLASS:



#########################################
Using TEMPLATE class
Numbers: 3 22 25 18 5 14 27 22 15 3
Uppercase Letters: H Q F G Q J D S N K
Months: JUN JAN OCT OCT FEB NOV FEB SEP FEB AUG
Press any key to continue . . .


*/