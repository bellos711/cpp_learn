#include<iostream>
#include<cstring>
#include<string>
#include<iomanip>

using namespace std;
int main()
{
	char c;
	int numWords = 0;
	int numDigits = 0;
	int numUpper = 0;

	cout << "Type words and or digits to count total: ";
	while (cin.get(c), (c != '\n')) //lets you take in entire sentence until you get to new line
	{
		if (isspace(c)) numWords++;
		if (isdigit(c)) numDigits++;
		if (isupper(c)) numUpper++;
	}
	cout << numWords+1 << " "<< numDigits << " "<< numUpper << endl;

	system("pause");
	return 0;
}