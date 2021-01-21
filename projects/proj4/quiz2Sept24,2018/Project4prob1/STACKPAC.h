#pragma once
#ifndef STACKPAC
#define STACKPAC

template <class T>
class STACK_PTR
{
private:
	struct node
	{
		T info; 
		node *next;
		//int x = NULL;
	};//end struct node

	node *stack; //stack is 

public:
	STACK_PTR() { stack = NULL; }
	void push_s(T x)
	{
		node *p;
		p = new(node);
		p->info = x;
		p->next = NULL;
		if (stack == NULL)
		{
			stack = p;
		}//ENDIF
		else
		{
			p->next = stack;
			stack = p;
		}//endelse
	}//end push_s

	bool empty_s()
	{
		return(stack == NULL) ? true : false;
	}//end empty_s

	T pop_s()
	{
		node *p;
		T x = stack->info;
		p = stack;
		stack = stack->next;
		delete(p);
		return x;
	}//end pop_s
	
};//end STACK class

template <class G>
class QUEUE_PTR
{
private:
	struct node_q
	{
		G info;
		node_q *next;
	};//end node_q
	node_q *front, *rear;
	
public:
	QUEUE_PTR() { front = rear = NULL; }//end constructor
	void push_q(G x)
	{
		node_q *p;
		p = new(node_q);
		p->info = x;
		p->next = NULL;
		if (front == NULL)
		{
			front = rear = p;
		}//endif
		else
		{
			rear->next = p;
			rear = p;
		}//endelse
	}//end push_q

	bool empty_q()
	{
		return(front == NULL) ? true : false;
	}//end empty_q

	G pop_q()
	{
		node_q *p;
		p = front;
		G x = front->info;
		front = front->next;
		delete(p);
		return x;
	}//end pop_q
};//end class QUEUE_PTR


#endif
