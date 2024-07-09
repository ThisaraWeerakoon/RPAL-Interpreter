#ifndef TREE_H_
#define TREE_H_

#include <iostream>
#include <stack>

using namespace std;

// Class for syntax tree
class tree
{
private:
	string val;	 // Value of the node
	string type; // Type of the node

public:
	tree *left;									// Pointer to the left child
	tree *right;								// Pointer to the right child
	void setType(string typ);					// Set the type of the node
	void setVal(string value);					// Set the value of the node
	string getType();							// Get the type of the node
	string getVal();							// Get the value of the node
	tree *createNode(string value, string typ); // Create a new node with the given value and type
	tree *createNode(tree *x);					// Create a new node as a copy of the given node
	void print_tree(int no_of_dots);			// Print the syntax tree
};

// Set the type of the node
void tree::setType(string typ)
{
	type = typ;
}

// Set the value of the node
void tree::setVal(string value)
{
	val = value;
}

// Get the type of the node
string tree::getType()
{
	return type;
}

// Get the value of the node
string tree::getVal()
{
	return val;
}

// Create a new node with the given value and type
tree *createNode(string value, string typ)
{
	tree *t = new tree();
	t->setVal(value);
	t->setType(typ);
	t->left = NULL;
	t->right = NULL;
	return t;
}

// Create a new node as a copy of the given node
tree *createNode(tree *x)
{
	tree *t = new tree();
	t->setVal(x->getVal());
	t->setType(x->getType());
	t->left = x->left;
	t->right = NULL;
	return t;
}

// Print the syntax tree
void tree::print_tree(int no_of_dots)
{
	int n = 0;
	while (n < no_of_dots)
	{
		cout << ".";
		n++;
	}

	// If the node type is ID, STR, or INT, print "<type:val>"
	if (type == "ID" || type == "STR" || type == "INT")
	{
		cout << "<";
		cout << type;
		cout << ":";
	}

	// If the node type is BOOL, NIL, or DUMMY, print "<val>"
	if (type == "BOOL" || type == "NIL" || type == "DUMMY")
		cout << "<";

	cout << val;

	// If the node type is ID, STR, or INT, print ">"
	if (type == "ID" || type == "STR" || type == "INT")
		cout << ">";

	// If the node type is BOOL, NIL, or DUMMY, print ">"
	if (type == "BOOL" || type == "NIL" || type == "DUMMY")
		cout << ">";

	cout << endl;

	// Print the left and right subtrees
	if (left != NULL)
		left->print_tree(no_of_dots + 1);

	if (right != NULL)
		right->print_tree(no_of_dots);
}

#endif