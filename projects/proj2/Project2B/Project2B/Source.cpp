/*
Kahlil Bello
September 12, 2018
Project 2 Prob 2
*/
#include <iostream>
#include<string>
#include<cmath>
using namespace std;

long int sum(int n, int m)
{
	if (n == m)
	{
		return m;
	}
	else
	{
		return (n + sum(n + 1, m));
	}
}//end sum

long int g(int n)
{
	if (n <= 3)
	{
		return 2;
	}
	else
	{
		return (n + g(n - 1) + g(n - 2));
	}
}//end g

long int f(int n)
{
	if (n == 2)
	{
		return 9;
	}
	else
	{
		return(f(n-1)+pow(3,n));
	}
}//end f

int main()
{
	//Prob 2-A
	cout << sum(5, 10) << "\n\n";
	//Prob 2-B
	cout << g(10) << "\n\n";
	//Prob 2-C
	cout << f(10) << "\n\n";
	system("pause");
	system("pause");
	return 0;
}

/*
Kahlil Bello
September 12, 2018
Project 2 Prob 2
//OUTPUT
45

246

88569

Press any key to continue . . .

*/