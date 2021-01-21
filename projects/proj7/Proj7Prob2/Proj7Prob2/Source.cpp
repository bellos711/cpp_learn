#include <iostream>
#include <cmath>
using namespace std;

class POLY
{
private:
	struct node
	{
		int coef;
		int pwr;
		node *next;
	};//end sruct node
	node *front, *rear;

public:
	POLY() { front = NULL; rear = NULL; }

	void insert(int c, int pw)
	{
		node *p;
		p = new(node);
		p->coef = c;
		p->pwr = pw;
		p->next = NULL;

		if(front==NULL)
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

	bool emptyq()
	{
		return(front == NULL) ? true : false;
	}//end emptyq

	void display()
	{
		node *p = front;
		while (p != NULL)
		{
			if (p->coef > 0)
			{
				cout << "+" << p->coef;
			}//endif
			else if(p->coef < 0 )
			{
				cout << "" << p->coef;
			}//endelse
			cout << "x^" << p->pwr;
			p = p->next;
		}//endwhile
	}//end display

	int value(int a)
	{
		int val = 0;
		node *p = front;

		while (p != NULL)
		{
			val += (p->coef)*pow(a, p->pwr);
			p = p->next;
		}//endwhile
		return val; //return polynomial
	}//end value
};//end class QUEUE_LIST



int main()
{
	POLY P;
	int c, pw; //for coef and power
	cout << "Enter the coefficient and power of a term (0,0 to stop): ";
	cin >> c >> pw;

	while ((c != 0) || (pw != 0))
	{
		P.insert(c, pw);
		cout << "Enter the coefficient and power of a term (0,0 to stop): ";
		cin >> c >> pw;
	}//endwhile

	//--------display poly-------
	cout << "This is your function: ";
	P.display();
	cout << "\n\n";
	int a;
	cout << "Enter a value to evaluate the polynomial: ";
	cin >> a;
	cout << "F(" << a << ") = " << P.value(a) << endl;
	system("pause");
	return 0;
}//end main