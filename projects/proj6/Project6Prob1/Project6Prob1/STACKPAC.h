#pragma once
#ifndef STACKPAC
#define STACKPAC

using namespace std;

template <class T>
class QUEUE_LIST
{
private:
	struct node
	{
		T info;
		node *next;
	};//end struct node
	node *front, *rear;

public:
	QUEUE_LIST() { front = NULL; rear = NULL; }//CONSTRUCTOR
	//-------ADD A NODE AT THE REAR OF THE QUEUE
	void pushq(T x)
	{
		node *p;
		p = new(node);
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

	//-------TEST WHETHER QUEUE IS EMPTY OR NOT
	bool emptyq()
	{
		return(front == NULL) ? true : false;
	}//end emptyq

	//---------POP FIRST NODE
	T popq()
	{
		node *p = front;
		T x;
		x = front->info;
		front = front->next;
		delete(p);
		return x;
	}//end popq
};//end QUEUE_LIST



//-----CLASS STACK
template<class G>
class STACK_LIST
{
private:
	struct node
	{
		G info;
		node *next;
	};//end struct node
	node *stack;
public:
	STACK_LIST() { stack = NULL; }//constructor
	//----------ADD NODE AT THE FRONT OF THE LIST
	void pushs(G x)
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

	//-------------test WHETHER STACK IS EMPTY OR NOT
	bool emptys()
	{
		return(stack == NULL) ? true : false;
	}//end emptys

	//---------------pop the first node
	G pops()
	{
		node *p = stack; 
		G x;
		x = stack->info;
		stack = stack->next;
		delete(p);
		return x;
	}//end pops
};//end STACK_LIST


//------CLASS ORDEREDLINKEDLIST
template<class F>
class ORDEREDLINKEDLIST
{
private:
	struct NODE
	{
		F info;
		NODE *next;
	};//end struct NODE
	NODE *list;

public:
	ORDEREDLINKEDLIST() { list = NULL; }
	void insert(F x)
	{
		NODE *p = list, *q = list, *r;
		//create new node
		r = new(NODE);
		r->info = x;
		r->next = NULL;
		//find the insertion place
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
		}//end elseif
		else //x is neither first nor last info
		{
			r->next = p;
			q->next = r;
		}//endelse
	}//end insert

	void display()
	{
		NODE *p = list;
		while (p != NULL)
		{
			cout << p->info << "-->";
			p = p->next;
		}//endwhile
		cout << "NULL\n";
	}//end display
};//end class ORDEREDLINKEDLIST


#endif