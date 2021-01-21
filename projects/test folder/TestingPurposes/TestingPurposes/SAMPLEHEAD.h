#pragma once
#ifndef SAMPLEHEAD
#define SAMPLEHEAD
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

const int FOUR = 4;

template <class T, class G>
class HASHIN
{
private:
	struct node
	{
		T data1;
		G data2;
		node *next;
	};//end struct node
	node *H[FOUR];

public:

	void clearHashTable()
	{
		for (int i = 0; i < FOUR; ++i)
		{
			H[i] = NULL;
		}//endfor
	}//end clearHashTable

	int hashFun(int x)
	{
		return x % 4;
	}//end hashFun

	void pushHash(T x, G y)
	{
		int hashed = hashFun(x[0] + x[1] + x[2]);
		node *p = new node;
		p->data1 = x;
		p->data2 = y;
		p->next = H[hashed];
		H[hashed] = p;
	}//end pushHash

	void searchHash(T x)
	{
		int hashed = hashFun(x[0] + x[1] + x[2]);
		node *p = H[hashed];
		while (p != NULL)
		{
			if (p->data1 == x) { break; }
			p = p->next;
		}//endwhile

		if (p == NULL) { cout << "Your data does not exist. . .\n"; }
		else { cout << p->data1 << "is found and informaion is " << p->data2 << endl; }
	}//end searchHash

	void displayHash()
	{
		node *p;
		for (int i = 0; i < FOUR; ++i)
		{
			p = H[i];
			cout << "H[" << i << "]-> ";
			while (p != NULL)
			{
				cout << "(" << p->data1 << ", " << p->data2 << ")->";
				p = p->next;
			}//endwhile
			cout << "NULL\n";
		}//endfor
	}//end displayHash
};//end HASHIN


template <class S>
class theStack
{
private:
	struct node 
	{
		S info;
		node *next;
	};//end struct node
	node *list;

public:
	theStack() { list = NULL; }
	void pushs(S x)
	{
		node *p = new node;
		p->info = x;
		p->next = NULL;
		if (list == NULL)
		{
			list = p;
		}
		else
		{
			p->next = list;
			list = p;
		}
	}//endpushs

	bool emptys()
	{
		return(list == NULL) ? true : false;
	}

	S pops()
	{
		S x;
		node *p = list;
		x = p->info;
		list = p->next;
		delete(p);
		return x;
	}

};//end class

template<class Q>
class theQueue
{
private:
	struct node
	{
		Q info;
		node *next;
	};
	node *front, *rear;

public:
	theQueue() { front = NULL; rear = NULL; }
	void pushq(Q x)
	{
		node *p = new node;
		p->info = x;
		p->next = NULL;
		if (front == NULL)
		{
			front = p;
			rear = p;
		}//endif
		else
		{
			rear->next = p;
			rear = p;
		}//endelse
	}//end psuhq

	bool emptyq()
	{
		return(front == NULL) ? true : false;
	}

	Q popQ()
	{
		Q x;
		node *p = front;
		x = front->info;
		front = p->next;
		delete(p);
		return x;
	}//qnd popQ

	void makeCircular()
	{
		rear->next = front;
	}//end makecircular

	int total = 0;
	void displayCircular()
	{
		node *p = front;
		do {
			total++;
			cout << p->info << "->";
			p = p->next;
		} while (p != front);
		cout << "RESTART->";
	}

	int giveTotal()
	{
		return total;
	}
};


//------------------------------------------------
template <class A, class B, class C>
class BST
{
private:
	struct node
	{
		A info1;
		B info2;
		C info3;
		node *left;
		node *right;
	};//end struct node
	node *root;


public:
	BST() { root = NULL; }
	void insert(node * &r, A x, B y, C z)
	{
		node *p = new node;
		p->info1 = x;
		p->info2 = y;
		p->info3 = z;
		p->left = NULL;
		p->right = NULL;
		if (r == NULL)
		{
			r = p;
		}//endif
		else
		{
			if (x < r->info1)  insert(r->left, x, y, z); 
			if (x > r->info1)  insert(r->right, x, y, z); 
		}//endelse
	}//end insert

	void insert(A x, B y, C z)
	{
		insert(root, x, y, z);
	}//end overridden insert

	void displayInorder(node *r)
	{
		if (r != NULL)
		{
			displayInorder(r->left);
			cout << "ID:" << r->info1 << ", NAME:" << r->info2 << ", BAL:" << r->info3 << " ";
			displayInorder(r->right);
		}//endif
		
	}//end displayInorder
	void displayInorder()
	{
		displayInorder(root);
	}//end overridden displayInorder 

	void displayPreorder(node *r)
	{
		if (r != NULL)
		{
			cout << "ID:" << r->info1 << ", NAME:" << r->info2 << ", BAL:" << r->info3 << " ";
			displayPreorder(r->left);
			displayPreorder(r->right);
		}//endif
		
	}//end displayPreorder
	void displayPreorder()
	{
		displayPreorder(root);
	}//end overridden displayPreorder 

	void displayPostorder(node *r)
	{
		if (r != NULL)
		{
			displayPostorder(r->left);
			displayPostorder(r->right);
			cout << "ID:" << r->info1 << ", NAME:" << r->info2 << ", BAL:" << r->info3 << " ";
		}//endif
		
	}//end displayPostorder
	void displayPostorder()
	{
		displayPostorder(root);
	}//end overridden displayPostorder 

	void search(node *r, int x)
	{
		if (r == NULL) { cout << "Item was not found\n"; }
		else if (r->info1 == x) { cout << "ID found with name:" << r->info2 << " and BALANCE of " << r->info3 << endl; }
		else if (x < r->info1) { search(r->left, x); }
		else if (x > r->info1) { search(r->right, x); }
	}//end search

	void search(int x)
	{
		search(root, x);
	}//end overridden search
};//end class BST

#endif