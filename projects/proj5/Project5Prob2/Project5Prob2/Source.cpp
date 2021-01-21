/*
KAHLIL BELLO
DATA STRUCTURES
OCT 3, 2018
PROJ 5 PROB 2
*/
#include <iostream>
#include <iomanip>
#include <string>
#include "STACKPAC.h"

using namespace std;

int main()
{
	STACK<int, 20> S;
	string token;
	int tokenVal=0;
	int x, y, r;
	char again = 'y';
	int i = 0;

	do {
		S.clearStack();

		cout << "Enter a postfix expression: ";

		while (cin >> token, token != "$")
		{
			if (isalpha(token[0]))
			{
					cout << "Enter value for " << token << ": ";
					/*for (int j = 0; j < 20; j++)
					{
						if (token[i] == '\0') //= tokenVal;
							cin >> tokenVal;  // this cin gets skipped entirely
						cout << "Value of " << token << " is " << tokenVal << endl;
						S.pushStack(tokenVal);
					}*/
					cin >> tokenVal;  // this cin gets skipped entirely
					cout << "Value of " << token << " is " << tokenVal << endl;
					S.pushStack(tokenVal);
			}  //endif

			else if (isdigit(token[0]))
			{
				tokenVal = stoi(token);
				S.pushStack(tokenVal);
			}  //end elseif

			else
			{
				switch (char(token[0]))
				{
				case '+':
					x = S.popStack();
					y = S.popStack();
					r = y + x;
					S.pushStack(r);
					break;
				case '-':
					x = S.popStack();
					y = S.popStack();
					r = y - x;
					S.pushStack(r);
					break;
				case '*':
					x = S.popStack();
					y = S.popStack();
					r = y * x;
					S.pushStack(r);
					break;
				case '/':
					x = S.popStack();
					y = S.popStack();
					r = y / x;
					S.pushStack(r);
					break;
				}//end switch
			}  // End else

			cin >> token;
		}//end while

		cout << "Final value = " << S.popStack() << endl;
	} while ((again == 'y') || (again == 'Y'));//end dowhile

	system("pause");
	return 0;
}//end main
