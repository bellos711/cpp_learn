#include "LINKEDLIST.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
	srand(time(0));
	QUEUE_LIST <int> randQue;

	int randNumbers[10];

	cout << "The 10 random numbers: ";
	for (int i = 0; i < 10; ++i)
	{
		randNumbers[i] = (rand()%50)+1;
		cout << randNumbers[i] << " ";
		randQue.pushq(randNumbers[i]);
	}//endfor
	cout << endl;
	cout << "//--------------------------------\n";
	cout << "Outputting in circular linked list form. . .\n";
	randQue.makeCircular();

	randQue.displayCircular();
	cout << endl;
	randQue.displayCircular();
	cout << endl;
	randQue.displayCircular();

	cout << endl;
	system("pause");
	return 0;
}//end main