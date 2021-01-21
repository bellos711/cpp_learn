#include <iostream>
#pragma once

#ifndef LINKEDLIST
#define LINKEDLIST

using namespace std;

template <class G>
class QUEUE_LIST
{
private:
	struct node
	{
		G info;
		node *next;
	};//end struct node
	node *front, *rear;
public:
	QUEUE_LIST() { front = NULL; rear = NULL; }
	//------------add a node to the rear of the queue
	void pushq(G x)
	{
		node *p = new(node);
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
	}//end pushq

	//--------test whether queue is empty
	bool emptyq()
	{
		return (front == NULL) ? true : false;
	}

	//----------pop the first node
	G popq()
	{
		node *p = front;
		G x;
		x = front->info;
		front = front->next;
		delete(p);
		return x;
	}//end popq

	void clearq()
	{
		front = NULL;
	}//end clearq

	void makeCircular()
	{
		rear->next = front;
	}//end makecircular

	void displayCircular()
	{
		node *p = front;
		do {
			cout << p->info << "->";
			p = p->next;
		} while (p != front);
		
		cout << "->circular restart->";
	}
};//end QUEUE_LIST


#endif