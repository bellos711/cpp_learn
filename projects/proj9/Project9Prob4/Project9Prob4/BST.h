#pragma once
#ifndef BST
#define BST
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class BTREE
{
private:
	struct node
	{
		string day;
		node *left;
		node *right;
	};//end node
	node *root; //we want root to point to new node

public:
	//set root to null and we use constructor
	BTREE() { root = NULL; }

	//insert x in BTREE
	void insert(node * &r, string x)
	{
		//create new node
		node *p= new(node);
		p->day = x;
		p->left = NULL;
		p->right = NULL;
		if (r == NULL) { r = p; }//endif
		else
		{
			if (x < r->day) { insert(r->left, x); }
			if (x > r->day) { insert(r->right, x); }
		}//endelse
	}//end insert

	//display tree using inorder traversal
	void displayInorder(node * &r)
	{
		
		//nodes seen 2nd time (LC)(P)(RC)
		if (r != NULL)
		{
			displayInorder(r->left);	//LC
			cout << r->day << " ";		//P
			displayInorder(r->right);	//RC
		}//endif
	}//end displayInorder

	void displayPreorder(node * &r)
	{

		//nodes seen 2nd time (P)(LC)(RC)
		if (r != NULL)
		{
			cout << r->day << " ";		//P
			displayInorder(r->left);	//LC
			displayInorder(r->right);	//RC
		}//endif
	}//end displayPreorder

	void displayPostorder(node * &r)
	{
		//nodes seen 2nd time (P)(LC)(RC)
		if (r != NULL)
		{
			displayInorder(r->left);	//LC
			displayInorder(r->right);	//RC
			cout << r->day << " ";		//P
		}//endif
	}//end displayPostorder

	void insert(string x)
	{
		insert(root, x); //pass root and x
	}//end overriden insert

	void displayTreeInorder() { displayInorder(root); }//end displayTree 
	void displayTreePreorder() { displayPreorder(root); }//end displayTree 
	void displayTreePostorder() { displayPostorder(root); }//end displayTree 

	void search(node * &r, string x)
	{
		if (r == NULL) //if we look for something we don't find it points to NULL
		{
			cout << x << " Does not exist\n"; return;
		}//endif
		else if (x == r->day)
		{
			cout << x << " is found\n"; return;
		}//endelseif
		else
		{
			if (x < r->day) { search(r->left, x); }
			if (x > r->day) { search(r->right, x); }
		}//endelse
	}//end search

	void search(string x) { search(root, x); }//end overriden search

	int treeHeight(node * &r)
	{
		if (r == NULL) return -1;
		else return 1 + max(treeHeight(r->left), treeHeight(r->right));
	}//end treeHeight

	int treeHeight() { return treeHeight(root); }//end overriden treeHeight

	int countNodes(node * &r)
	{
		if (r == NULL) return 0;
		else { return 1 + countNodes(r->left) + countNodes(r->right); }
	}//end countNodes

	int countNodes() { return countNodes(root); }//end overriden countNodes
};//end class BTREE


#endif