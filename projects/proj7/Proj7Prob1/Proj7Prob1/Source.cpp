#include <iostream>
#include "STACKPAC.h"

using namespace std;

int main()
{
	QUEUE_LIST<char> queue; //q->[ |/]
	STACK_LIST<char> stack; //q->[ |/]
	char c;
	char again = 'y';
	
	do
	{
		queue.clearq();
		stack.clears();

		cout << "Type in a sentence to test for palindrome: ";
		//read input and ignore whitespace and specialchars
		while (cin.get(c), c != '\n')
		{
			if (isalpha(c))
			{
				c = toupper(c);
				queue.pushq(c);
				stack.pushs(c);
			}//endif
		}//endwhile

		//check for palindrome
		char c1, c2;
		while (!queue.emptyq())
		{
			c1 = queue.popq();
			c2 = stack.pops();
			if (c1 != c2) { break; }//break out of loop if not equal
		}//endwhile

		if (queue.emptyq())
		{
			cout << "You have a palindrome\n";
		}//endif
		else
		{
			cout << "you do not have a palindrome\n";
		}//endelse

		cout << "Continue? (y/n). . . ";
		cin >> again;
		cin.ignore(1, '\n');

	} while (again == 'Y' || again == 'y');//end dowhile

	system("pause");
	return 0;
}//end main