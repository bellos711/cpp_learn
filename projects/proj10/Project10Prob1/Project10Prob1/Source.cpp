#include "FRACTION.h"


int main()
{
	fract f1, f2, f3;
	f1.readFraction();
	f2.readFraction();


	f3 = f1 + f2;

	f1.display(); cout << "+ ";
	f2.display(); cout << "=";
	f3.display(); cout << endl;

	f3 = f1 - f2;
	f1.display(); cout << "- ";
	f2.display(); cout << "=";
	f3.display(); cout << endl;

	f3 = f1 * f2;
	f1.display(); cout << "* ";
	f2.display(); cout << "=";
	f3.display(); cout << endl;

	f3 = f1 / f2;
	f1.display(); cout << "/ ";
	f2.display(); cout << "=";
	f3.display(); cout << endl;

	f2.plusOne();
	f1.minusOne();
	cout << endl;


	system("pause");
	return 0;
}