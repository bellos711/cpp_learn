#include <iostream>

using namespace std;

struct node
{
	int num;
	node *next;
};//end node

int main()
{
	/*int a[4] = {1,9,1,3};

	node *p; //p is a pointer to node
	p = new(node);

	p->num = a[0];
	
	p->next = new(node);
	p->next->num = a[1];

	p->next->next = new(node);
	p->next->next->num = a[2];

	p->next->next->next = new(node);
	p->next->next->next->num = a[3];

	node *c = p;*/
	int a[4] = { 3,6,9,1 };
	node *p; 
	p = new(node); //p->[ ]
	p->num = a[0];
	p->next = NULL;
	node *r;
	int sum=(p->num);
	int nodesCounter = 0;

	//since we used a[0] we start loop at 1
	for (int i = 1; i < 4; ++i)
	{
		//create new node
		r = new(node);
		r->num = a[i];
		//p->[3], want r->[6] to conenct to p
		//connect pointers
		//i.)
		r->next = p;
		p = r;

		//ii.)
		sum += (r->num);
	}//end for

	//---------i.) display results in LIFO------------
	cout << "Content of the nodes are in LIFO: ";

	while (r != NULL)
	{
		nodesCounter++;
		cout << (r->num) << "->";
		r = r->next;
	}//end while
	cout << "NULL\n";

	//----------ii.) compute total of all nodes------
	cout << "The total of all the numbers is: " << sum << endl;

	//----------iii.) determine how many nodes in linked list-----
	cout << "The total number of NODES is: " << nodesCounter << endl;
	system("pause");
	return 0;
}//end main