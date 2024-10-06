#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
struct	Node* left;
struct	Node* right;
	Node(int r)
	{
		 data = r;
		left = right = NULL;
	}
};

void printPostorder( struct Node*r)//left,right,root
{
	if(r == NULL)
		return;
	printPostorder(r->left);//first recur on left subtree

		printPostorder(r->right); //now deal with the Node

	cout << r->data << " ";//then recur on right subtree

}

int main ()
{

	struct Node* root = new Node(1);
	root->left = new Node(2);
	root->right = new Node(3);
	root->left->left = new Node(4);
	root->left->right = new Node(5);
	root->left->left->left = new Node(6);
	root->right->right = new Node(7);

	cout << "postorder:";//function call
	printPostorder(root);

	return 0;
}
