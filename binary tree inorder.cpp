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

void printinorder( struct Node*r)//left,root,right
{
	if(r == NULL)
		return;
	printinorder(r->left);//first recur on left subtree
	cout << r->data << " ";//now deal with the node
	printinorder(r->right); //then recur on right subtree

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

	cout << "inorder:";//function call
	printinorder(root);

	return 0;
}
