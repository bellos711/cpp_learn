#pragma once
#include <iostream>
#ifndef HASH
#define HASH
using namespace std;

class HASHEN
{
private:
	struct node
	{
		int info;
		node *next;
	};//end struct node
	node *H[5];
public:
	void clearHashTable()
	{
		for (int i = 0; i < 5; ++i)
		{
			H[i] = NULL;
		}//endfor
	}//end clearhashtable

	int hashFun(int x)	//hash function
	{
		return x % 5;
	}//end hashFun

	void push(int x)
	{
		//find the insertion place first
		int i = hashFun(x);
		node *p = new node; //p->[x]
		p->info = x;
		
		//inser this nwe node in front of H[i];
		p->next = H[i]; H[i] = p;
	}//end push

	void search(int x)
	{
		//send to hash function for searching if it belongs to H[0] etc...
		int i = hashFun(x);
		//create copy of head node
		node *p = H[i];
		while (p != NULL)
		{
			if (p->info == x) { break; }
			p = p->next;
		}//endwhile

		if (p == NULL)
		{cout << x << " Does not exist\n";}
		else
		{cout << x << " is found\n";}
	}//end search

	void displayH()
	{
		node *p;
		for (int i = 0; i < 5; ++i)
		{
			p = H[i];
			cout << "H[" << i << "]->";
			while (p != NULL)
			{
				cout << p->info << "->";
				p = p->next;
			}//endwhle
			cout << "NULL\n";
		}//endfor
	}//end displayh


};//end class hash
#endif