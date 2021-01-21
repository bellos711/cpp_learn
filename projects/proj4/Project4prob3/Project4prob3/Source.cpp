/*
KAHLIL BELLO
DATA STRUCTURES
SEPT 26, 2018
PROJECT 4 PROB 3
*/
#include <iostream>
#include "STACKPAC.h"

using namespace std;

int main()
{
	STACK<char, 100> LR;
	STACK<char, 100> RL;
	STACK<char, 100> TEMP;

	char again = 'y';

	do {
		
		LR.clearStack();
		RL.clearStack();
		TEMP.clearStack();

		char c;
		cout << "Enter a sentence: ";
		while (cin.get(c), c != '\n')
		{
			if (isalpha(c))
			{
				c = toupper(c);
				RL.pushStack(c);
				TEMP.pushStack(c);
			}//endif
		}//endwhile
		//copy temp to LR

		while (!TEMP.emptyStack())
		{
			char chr = TEMP.popStack();
			LR.pushStack(chr);
		}//endwhile

		//test for palindrome
		while (!RL.emptyStack())
		{
			char c1 = RL.popStack();
			char c2 = LR.popStack();
			if (c1 != c2)
				break;
		}//endwhile

		if (RL.emptyStack() == true)
		{
			cout << "You have a PALINDROME" << endl;
		}
		else
		{
			cout << "You DO NOT have a PALINDROME" << endl;
		}

		cout << "CONTINUE(y/n)? ";
		cin >> again;
		cin.ignore(1, ('\n'));
	} while ((again == 'y') || (again == 'Y'));

	system("pause");

	return 0;
}//end main

/*
OUTPUT:
Enter a sentence: Taco Cat
You have a PALINDROME
CONTINUE(y/n)? y
Enter a sentence: Do Geese see God?
You have a PALINDROME
CONTINUE(y/n)? y
Enter a sentence: Too bad, I hid a boot
You have a PALINDROME
CONTINUE(y/n)? n
Press any key to continue . . .

*/