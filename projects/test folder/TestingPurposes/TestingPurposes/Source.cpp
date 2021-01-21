#include "SAMPLEHEAD.h"
#include <fstream>
#include <ctime>

const int NUMOFMONTHS = 12;

int f(int n)
{
	if (n == 1) return 3;
	else return (n + f(n - 1));
}//end f




int main()
{
	srand(time(0));
	//----------------------------------------

	int randomNumbers[10];

	for (int i = 0; i < 10; ++i)
	{
		randomNumbers[i] = rand() % 50 + 1;
		cout << randomNumbers[i] << " ";
	}//endfor
	cout << endl;

	theStack <int> ss;
	ss.pushs(11);
	ss.pushs(22);
	ss.pushs(33);
	while (!ss.emptys())
	{
		int x = ss.pops();
		cout << x << "->";
	}
	cout << "NULL\n";
	cout << "Now use queue---------------------\n";

	theQueue <int> qq;
	qq.pushq(44);
	qq.pushq(55);
	qq.pushq(66);
	while (!qq.emptyq())
	{
		int x = qq.popQ();
		cout << x << "->";
	}
	cout << "NULL\n";
	cout << "Now use circular---------------------\n";
	qq.pushq(77);
	qq.pushq(88);
	qq.pushq(99);
	qq.makeCircular();
	qq.displayCircular();
	cout << "total nodes = " << qq.giveTotal() << endl;;


	while(!ss.emptys())
	{
		int x = ss.pops();
		cout << x << ", ";
	}
	cout << endl;
	

	cout << "----------------------------------------------------\n";
	struct monthDays
	{
		string month;
		int days;
	};

	cout << "calling statement 5 = " << f(5) << endl;

	HASHIN <string, int> sampleHash;
	sampleHash.clearHashTable();
	monthDays theMonthDays[NUMOFMONTHS] = { {"JAN",31},{"FEB",28},{"MAR", 31},{"APR",30},{"MAY",31},{"JUN",30},
	{"JUL",31},{"AUG",31},{"SEP",30},{"OCT",31},{"NOV",30},{"DEC",31} };

	for (int i = 0; i < NUMOFMONTHS; ++i)
	{
		sampleHash.pushHash(theMonthDays[i].month, theMonthDays[i].days);
	}//endfor
	
	sampleHash.displayHash();

	/*
	char again;
	string toBeSearched;
	
	do {
		cout << "Search an item: ";
		cin >> toBeSearched;
		sampleHash.searchHash(toBeSearched);
		cout << "Search again? (y/n): ";
		cin >> again;
	} while (again=='y' || again=='Y');
	*/
	cout << "################################################\n";
	//-----------------FOR THE BST-----------------
	struct CUSTOMERS
	{
		int id;
		string name;
		double balance;
	};//end CUSTOMERS

	CUSTOMERS customer1;
	BST <int, string, double> theTree;
	CUSTOMERS sampleCustomers[3]; //= { {20, "John", 20.30},{10, "Mary", 10.10},{30, "Bill", 30.30} };

	ifstream inData("mytext.txt");
	if (inData.is_open())
	{
		cout << "TEST:\n";
		for (int i = 0; i <3; ++i)
		{
			while (inData >> sampleCustomers[i].id >> sampleCustomers[i].name >> sampleCustomers[i].balance)
			{
				cout << sampleCustomers[i].id << ", " << sampleCustomers[i].name << ", " << sampleCustomers[i].balance << endl;
				theTree.insert(sampleCustomers[i].id, sampleCustomers[i].name, sampleCustomers[i].balance);
			}
		}
	}
	else { cout << "your file does not exist. . .\n"; }

	cout << "STREAM ABOVE---------------------\n";


	
	

	/*for (int i = 0; i < 3; ++i)
	{
		theTree.insert(sampleCustomers[i].id, sampleCustomers[i].name, sampleCustomers[i].balance);
	}//endfor*/

	cout << "------------------------------\n";
	theTree.displayInorder();
	cout << endl;
	theTree.displayPreorder();
	cout << endl;
	theTree.displayPostorder();
	cout << endl;

	int item;
	char again = 'y';

	do{
	cout << "Search for an item: ";
	cin >> item;

	theTree.search(item);
	cout << "Again?";
	cin >> again;

	} while (again == 'y' || again == 'Y');









	cout << "\n\n\n\n\n\n##########################################################\n";


	system("pause");
	return 0;
}//end main
