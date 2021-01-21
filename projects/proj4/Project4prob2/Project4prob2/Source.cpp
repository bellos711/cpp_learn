/*
KAHLIL BELLO
DATA STRUCTURES
SEPT 26, 2018
PROJ 4 PROB 2
*/
#include <iostream>
#include "STACKPAC.h"

int main()
{
	STACK <int, 10> S;
	S.clearStack();
	int a = 5, b = 7, c = 8, d = 2;
	int x, y, r;
	char p;
	char again = 'y';

	do
	{
		std::cout << "Enter a postfix expression : ";
		std::cin >> p;

		while (p != '$')//
		{
			switch (p)
			{
			case('a'):
				S.pushStack(a);
				break;
			case('b'):
				S.pushStack(b);
				break;
			case('c'):
				S.pushStack(c);
				break;
			case('d'):
				S.pushStack(d);
				break;
			case('+'):
				x = S.popStack();
				y = S.popStack();
				r = y + x;
				S.pushStack(r);
				break;
			case('-'):
				x = S.popStack();
				y = S.popStack();
				r = y - x;
				S.pushStack(r);
				break;
			case('*'):
				x = S.popStack();
				y = S.popStack();
				r = y * x;
				S.pushStack(r);
				break;
			case('/'):
				x = S.popStack();
				y = S.popStack();
				r = y / x;
				S.pushStack(r);
				break;
			}//end switch
			std::cin >> p;
		}//endwhile
		using std::endl;
		std::cout << "The value of the expressions is: " << S.popStack() << endl;
		std::cout << "CONTINUE(y/n)? ";
		std::cin >> again;
	} while ((again == 'y') || (again == 'Y'));

	std::system("pause");
	return 0;
}

/*
OUTPUT:

Enter a postfix expression : ab*c+d-$
The value of the expressions is: 41
CONTINUE(y/n)? y
Enter a postfix expression : aa+b*c-d+$
The value of the expressions is: 64
CONTINUE(y/n)? n
Press any key to continue . . .

*/


