
#include "BST.h"

using namespace std;

int main()
{
	//we need a pointer to point to the tree
	BTREE t; //object
	//we want to insert name of months
	string months[12] = { "Jan","Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };
	for (int i = 0; i < 12; ++i)
	{
		t.insert(months[i]); //calls the overriden insert function
	}//endfor

	/*display the ree, we can't call main function bec 
	root is needed and is in private. Pass it to  displayTree instead*/
	cout << "INORDER TRAVERSAL: ";
	t.displayTreeInorder(); 		
	cout << endl;

	cout << "PREORDER TRAVERSAL: ";
	t.displayTreePreorder();
	cout << endl;

	cout << "POSTORDER TRAVERSAL: ";
	t.displayTreePostorder();
	cout << endl;

	cout << "--------------------------------------------------------------------------\n";
	char again = 'y';
	string search;
	do {
		cout << "\nEnter something to search: ";
		cin >> search;
		t.search(search);
		cout << "Search again? (y/n)? ";
		cin >> again;
	} while (again == 'y' || again == 'Y');

	cout << "\n--------------------------------------------------------------------------";
	cout << "\nYour tree height is: " << t.treeHeight() << endl;

	cout << "\n--------------------------------------------------------------------------";
	cout << "\nYou have " << t.countNodes() << " nodes" << endl;

	system("pause");
	return 0;
}