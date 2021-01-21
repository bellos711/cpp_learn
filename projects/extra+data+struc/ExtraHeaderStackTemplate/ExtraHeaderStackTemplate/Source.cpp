/*
KAHLIL BELLO
DATA STRUTURES
SEPTEMBER 19, 2018
project EXTRA HEADER STACK
*/
#include <iostream>
#include <string>
#include <cstring>
#include "STACKPAC.h"

using namespace std;



int main()
{
	//TEST
	/*cout << "Test integer type in stack. . ." << endl;
	STACK <int, 5>P;
	P.clearStack(); //counter is now 0
	P.pushStack(7); //counter 0
	P.pushStack(11); //counter 1
	P.pushStack(17); //counter 2
	cout << P.popStack() << endl; //reduce counter by 1 so back to counter 2
	cout << P.popStack() << endl; //reduce counter by 1 so back to counter 1
	cout << "End integer test. . .\n##########################\n";*/

	STACK<string, 7>Days;
	Days.clearStack();

	Days.pushStack("Sunday");
	Days.pushStack("Saturday");
	Days.pushStack("Friday");
	Days.pushStack("Thursday");
	Days.pushStack("Wednesday");
	Days.pushStack("Tuesday");
	Days.pushStack("Monday");
	
	cout << "Days of the Week:\n";
	while (!Days.emptyStack())
	{
		string days = Days.popStack();
		cout << days << " ";
	}
	cout << "\n\n#############################################################\n";
	//end STACK Days

	STACK<char, 26>Letters;
	Letters.clearStack();

	for (int i = 1; i <= 26; ++i)
	{
		Letters.pushStack(char(91-i));
	}

	cout << "Characters alphabet:\n";
	while (!Letters.emptyStack())
	{
		char chars = Letters.popStack();
		cout << chars << " ";
	}
	
	cout << "\n\n";
	

	system("pause");
	return 0;
}

/*
KAHLIL BELLO
DATA STRUTURES
SEPTEMBER 19, 2018
project EXTRA HEADER STACK
OUTPUT:
Days of the Week:
Monday Tuesday Wednesday Thursday Friday Saturday Sunday

#############################################################
Characters alphabet:
A B C D E F G H I J K L M N O P Q R S T U V W X Y Z

Press any key to continue . . .
*/