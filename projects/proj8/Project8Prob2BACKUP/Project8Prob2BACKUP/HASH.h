#pragma once
#include <iostream>
#include <string>
#ifndef HASH
#define HASH
using namespace std;

class HASHEN
{
private:
	struct node
	{
		string nameInfo = "sad";
		int daysInfo;
		node *next;
	};//end struct node
	node *H[4];
public:
	void clearHashTable()
	{
		for (int i = 0; i < 4; ++i)
		{
			H[i] = NULL;
		}//endfor
	}//end clearhashtable

	int hashFun(int x)	//hash function
	{
		return x % 4;
	}//end hashFun

	void push(string x, int y)
	{
		//find the insertion place first
		int i = hashFun((x[0]) + (x[1]) + (x[2]));
		node *p = new node; //p->[x]
		p->nameInfo = x;
		p->daysInfo = y;

		//inser this nwe node in front of H[i];
		p->next = H[i]; H[i] = p;
	}//end push

	void search(string x)
	{
		//send to hash function for searching if it belongs to H[0] etc...
		int i = hashFun((x[0]) + (x[1]) + (x[2]));
		//create copy of head node
		node *p = H[i];
		while (p != NULL)
		{
			if (p->nameInfo == x) { break; }
			p = p->next;
		}//endwhile

		if (p == NULL)
		{
			cout << x << " Does not exist\n";
		}
		else
		{
			cout << x << " is found which has " << p->daysInfo << " days.\n";
		}
	}//end search

	void displayH()
	{
		node *p;
		for (int i = 0; i < 4; ++i)
		{
			p = H[i];
			cout << "H[" << i << "]->";
			while (p != NULL)
			{
				cout << p->nameInfo << ", " << p->daysInfo << "->";
				p = p->next;
			}//endwhle
			cout << "NULL\n";
		}//endfor
	}//end displayh


};//end class hash
#endif
