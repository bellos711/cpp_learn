#pragma once
#ifndef STACKPAC
#define STACKPAC
#include <iostream>

template <class T>
class STACK_LIST
{
private:
	struct node
	{
		T info;
		node *next;
	};//end struct
	node *stack;
public:
	STACK_LIST() { stack = NULL; }
	//---------add node to front of list------
	void pushs(T x)
	{
		node *p;
		p = new(node);
		p->info = x;
		p->next = NULL;
		if (stack == NULL)
		{
			stack = p;
		}//endif
		else
		{
			p->next = stack;
			stack = p;
		}//endelse
	}//end pushs

	//----------test whether stack is empty--------
	bool emptys()
	{
		return(stack == NULL) ? true : false;
	}//end emptys

	T pops()
	{
		T x;
		node *p;
		p = stack;
		x = stack->info;
		stack = stack->next;
		delete(p);
		return x;
	}//end pops

	void clears()
	{
		stack = NULL;
	}//end clears
};//end STACK_LIST


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
};//end QUEUE_LIST


template <class F>
class OrderedLinkedList
{
private:
	struct node
	{
		F info;
		node *next;
	};//end struct node
	node *list;
public:
	OrderedLinkedList() { list = NULL; }

	void inser(F x)
	{
		node *p = list;
		node *q = list;
		node *r;
		//create a new node
		r = new(node);
		r->info = x;
		r->next = NULL;
		while (p != NULL && x > p->info)
		{
			q = p;
			p = p->next;
		}//endwhile

		if (p == list) //x is the first info
		{
			list = r;
			r->next = p;
		}//endif
		else if (p == NULL) //x is the last info
		{
			q->next = r;
		}//endelseif
		else //x is neither first nor last info
		{
			r->next = p;
			q->next = r;
		}
	}//end insert

	void display()
	{
		node *p = list;
		while (p != NULL)
		{
			std::cout << p->info << "->";
			p = p->next;
		}//endwhile
		std::cout << "NULL\n";
	}//end display

};//end OrderedLinkedList
#endif
