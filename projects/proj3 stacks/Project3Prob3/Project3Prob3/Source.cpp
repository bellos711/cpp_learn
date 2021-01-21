/*
KAHLIL BELLO
DATA STRUTURES
SEPTEMBER 19, 2018
project 3 prob 3
*/
#include <iostream>
#include <string>

using namespace std;

class STACK
{
private:
	char a[100];
	int counter;

public:
	void clearStack()
	{
		counter = 0;
	}//end clearStack

	bool emptyStack()
	{
		return (counter == 0) ? true : false;
	}//end clearStack

	bool fullStack()
	{
		return (counter == 100) ? true : false;
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
};  //end class STACK

bool isUpper(char x)
{
	return (isupper(x)) ? true : false;
}//end isUpper

bool isLower(char x)
{
	return (islower(x)) ? true : false;
}//end isLower

bool isVowel(char x)
{
	x = toupper(x);
	return (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U') ? true : false;
}//end isVowel

int main()
{
	STACK UPP;
	STACK LOW;
	STACK VOW;
	UPP.clearStack();
	LOW.clearStack();
	VOW.clearStack();

	char c;
	cout << "Enter a sentence: " << endl;

	while (cin.get(c), c != '\n')
	{
		if (isUpper(c))
			UPP.pushStack(c);
		if (isLower(c))
			LOW.pushStack(c);
		if (isVowel(c))
			VOW.pushStack(c);
	} 
	cout << endl;

	cout << "Uppercase letters: ";
	while (!UPP.emptyStack())
	{
		char out = UPP.popStack();
		cout << out << " ";
	}
	cout << endl;
	//#################LOWER###############################

	cout << "Lowercase letters: ";
	while (!LOW.emptyStack())
	{
		char out = LOW.popStack();
		cout << out << " ";
	}
	cout << endl;
	//###################VOWELS#############################

	cout << "Vowels: ";
	while (!VOW.emptyStack())
	{
		char out = VOW.popStack();
		cout << out << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}

/*
KAHLIL BELLO
DATA STRUTURES
SEPTEMBER 19, 2018
project 3 prob 3

OUTPUT:
Enter a sentence:
Today Is Monday

Uppercase letters: M I T
Lowercase letters: y a d n o s y a d o
Vowels: a o I a o
Press any key to continue . . .

*/
