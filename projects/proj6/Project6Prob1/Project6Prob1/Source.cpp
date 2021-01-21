#include <iostream>
#include "STACKPAC.h"
#include <iomanip>

using namespace std;

int main()
{
	//given 3 arrays
	int a[7] = {3,6,9,1,8,5,2};
	int b[5] = {10, 50, 70, 20, 40};
	int c[6] = { 100, 500, 800, 300, 200, 900 };

	//----------------------QUESTION 1------------------------------
	//1. insert array a in a linked list to behave like a stack FILO
	//-->[2| ]-->[5| ]-->	-->	  -->[3|/]
	STACK_LIST <int> theStack;
	
	cout << "Displaying array a: ";
	for (int i = 0; i < 7; ++i)
	{
		cout << a[i] << " ";

		//-----pushing array values into stack to behave as LIFO
		theStack.pushs(a[i]);
	}//endfor
	cout << endl;

	int sum = 0;
	int totalNodes = 0;
	//---------displaying array a in reversed order
	//i.) DISPLAY THE CONTENTS OF ALL THE NODES
	cout << "Displaying array a REVERSED: ";
	while (!theStack.emptys())
	{
		int d = theStack.pops();
		//ii.) COMPUTE THE TOTAL OF ALL THE NODES
		sum += d;
		//iii.) DETERMINE THOW MANY NODES ARE IN THE LINKED LIST
		totalNodes++;
		cout << d << "-->";
	}//endwhile
	cout << "NULL\n";
	cout << "Sum: " << sum << endl;
	cout << "Total Nodes: " << totalNodes << endl;

	cout << "############################################################\n\n";
	//----------------------QUESTION 2------------------------------
	//2. insert array b in a linked list to behave like a stack FIFO
	//-->[10| ]-->[50| ]-->	-->	  -->[40|/]
	QUEUE_LIST <int> theQueue;

	cout << "Displaying array b: ";
	for (int i = 0; i < 5; ++i)
	{
		cout << b[i] << " ";

		//-----pushing array values into queue to behave as FIFO
		theQueue.pushq(b[i]);
	}//endfor
	cout << endl;
	//i.) DISPLAY THE CONTENTS OF ALL THE NODES
	int max=0;
	int min=b[4]; //since b[0] is already the lowest so put diff num to if in whileloop can sort 
	cout << "Displaying array b in SAME ORDER: ";
	while (!theQueue.emptyq())
	{
		int d = theQueue.popq();
		//ii. FIND THE MAX DATA IN THE QUEUE
		if (d > max)
		{
			max = d;
		}
		//    FIND THE MIN DATA IN THE QUEUE
		if (d < min)
		{
			min = d;
		}

		cout << d << "-->";
	}//endwhile
	cout << "NULL\n";
	cout << "The Maximum is: " << max << endl;
	cout << "The Minimum is: " << min << endl;

	cout << "############################################################\n\n";
	//----------------------QUESTION 3------------------------------
	//3. Write a program to insert data in array c in an ordered linked list
	ORDEREDLINKEDLIST <int> theOList;
	QUEUE_LIST <int> theEVEN; //for even numbers added to list
	int isEven;
	cout << "Displaying array c: ";
	for (int i = 0; i < 6; ++i)
	{
		cout << c[i] << " ";
		//-----pushing array values into orderedlist
		theOList.insert(c[i]);
		//ii.) compute average of all even numbers, collect even numbers into queue or stack
		if ((c[i] % 2) == 0)
		{
			theEVEN.pushq(c[i]);
		}

	}//endfor
	cout << endl;
	//i.) DISPLAY THE CONTENTS OF ALL THE NODES
	cout << "Displaying array c in ASCENDING: ";
	theOList.display();

	//ii.) compute and display the average of all even numbers in array c
	int totalEven=0;
	double theAverage;
	while (!theEVEN.emptyq())
	{
		int d = theEVEN.popq();
		totalEven += d;
	}
	cout << endl;
	cout << "Total is " << totalEven << endl;
	theAverage = (totalEven / 6.0);
	cout << "The Average of the even numbers in the list from array c is: " << setprecision(5) << theAverage << endl;

	system("pause");
	return 0;
}//end main

/*
OUTPUT:
Displaying array a: 3 6 9 1 8 5 2
Displaying array a REVERSED: 2-->5-->8-->1-->9-->6-->3-->NULL
Sum: 34
Total Nodes: 7
############################################################

Displaying array b: 10 50 70 20 40
Displaying array b in SAME ORDER: 10-->50-->70-->20-->40-->NULL
The Maximum is: 70
The Minimum is: 10
############################################################

Displaying array c: 100 500 800 300 200 900
Displaying array c in ASCENDING: 100-->200-->300-->500-->800-->900-->NULL

Total is 2800
The Average of the even numbers in the list from array c is: 466.67
Press any key to continue . . .


*/