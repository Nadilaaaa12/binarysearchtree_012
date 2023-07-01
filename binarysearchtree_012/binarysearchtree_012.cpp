#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	// Constructor for the node class
	Node(string i, Node* , Node* r)
	{
		info = i;
		leftchild;
		rightchild = r;
	}
};
