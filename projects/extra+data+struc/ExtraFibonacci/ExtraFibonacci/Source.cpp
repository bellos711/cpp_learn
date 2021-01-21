/*
KAHLIL BELLO
DATA STRUCTURES
SEPT 19, 2018
PROJECT EXTRA CREDIT FIBONACCI
*/
#include <iostream>
#include <ctime>

using namespace std;

long int Fib(int n)
{
	if (n <= 2)
	{return 1;}

	else
	{
		return (Fib(n - 1) + Fib(n - 2));
	}
}//end Fib


long int NRFib(int n)
{
	int f0 = -1;
	int f1 = 1;
	int fn;

	for (int i = 0; i <= n; ++i)
	{
		fn = f0 + f1;
		f0 = f1;
		f1 = fn;
	}

	return fn;
}//end NRFib


int main()
{
	int start = clock();
	cout << "This is the 43rd Fibonacci number RECURSIVE...\n" << Fib(42) << endl;
	int finish = clock();
	cout << "The run-time is: " << (finish - start) / 1000 << "\n\n"; 
	

	int start2 = clock();
	cout << "This is the 43rd Fibonacci number with NON-RECURSIVE function...\n" << NRFib(42) << endl;
	int finish2 = clock();
	cout << "The run-time is: " << (finish2 - start2) / 1000 << endl;
	system("pause");
	return 0;
}

/*
KAHLIL BELLO
DATA STRUCTURES
SEPT 19, 2018
PROJECT EXTRA CREDIT FIBONACCI

OUTPUT:

This is the 43rd Fibonacci number RECURSIVE...
267914296
The run-time is: 8

This is the 43rd Fibonacci number with NON-RECURSIVE function...
267914296
The run-time is: 0
Press any key to continue . . .

*/