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

void printPreorder( struct Node*r)//root,left,right
{
	if(r == NULL)
		return;

	cout << r->data << " "; //first deal with the Node
	printPreorder(r->left);//now recur on left subtree
	printPreorder(r->right);//then recur on right subtree

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

	cout << "preorder:";//function call  
	printPreorder(root);

	return 0;
}
