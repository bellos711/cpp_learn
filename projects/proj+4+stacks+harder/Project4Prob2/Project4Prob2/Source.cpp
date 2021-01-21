#include <iostream>
#include "STACKPAC.h"

using namespace std;

int main()
{
	STACK <int, 10> S;
	int a = 5, b = 6, c = 7;
	int x,y,r;
	char p;

	//cout << "Enter a postfix expression : ";
	//cin >> p;
	for (int i = 0; i < 10; ++i)
	{
		S.pushStack(i);
	}

	/*
	while (cin.get(p), c != '$')//
	{
		switch (p)
		{
		case('a'): 
			S.pushStack(5);
			break;
		case('b'):
			S.pushStack(6);
			break;
		case('c'):
			S.pushStack(7);
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
	}//endwhile*/
	cout << "The value of the expressions is: " << S.popStack() << endl;

	cout << "fuk u" << endl;
	system("pause");
	return 0;
}