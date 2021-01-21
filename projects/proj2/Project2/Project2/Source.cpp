/*
Kahlil Bello
September 12, 2018
Project 2 Prob 1
*/

#include <iostream>
#include<string>
#include<cstring>
using namespace std;

template<class T>
void display(T x, int n)
{
	//function to display arrays
	for (int i = 0; i < n; ++i)
	{
		cout << x[i] << " ";
	}
	cout << endl;
}//end display

int main()
{
	string day[5] = { "monday", "Tue", "Wednesday", "Thursday", "Friday" };
	char days[5][10] = {"Monday", "Tuesday","wednesday", "Thu", "Friday"};
	//Prob 1-A display both arrays
	cout << "This is array day" << endl;
	display(day, 5);
	cout << "This is array days" << endl;
	display(days, 5);

	//Prob 1-B change strings/characters
	day[0][0] = toupper(day[0][0]);
	days[3][0] = toupper(days[3][0]);
	cout << "From Array day: " << day[0] << endl;
	cout << "From Array days: " << day[3] << endl;

	//Prob 1-C display length of tuesday in both arrays
	cout << "Length of Tue is " << day[1].length() << " and the length of Tuesda is " << strlen(days[1]) << endl;
	system("pause");
	return 0;
}

/*
Kahlil Bello
September 12, 2018
Project 2 Prob 1
OUTPUT:
This is array day
monday Tue Wednesday Thursday Friday
This is array days
Monday Tuesday wednesday Thu Friday
From Array day: Monday
From Array days: Thursday
Length of Tue is 3 and the length of Tuesda is 7
Press any key to continue . . .
*/