#include <iostream>
#include <bits/stdc++.h>//can be replaced with climits
using namespace std;

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int data)
    {
        val = data;
        left = NULL;
        right = NULL;
    }
};

int res = INT_MIN;//initialize result

int maxSum(TreeNode* root)
{
    if (root == NULL)//if empty
        return 0;
    int lsum = max (maxSum(root->left), 0);//start with left sum
    int rsum =  max(maxSum(root->right), 0);//then right sum
    res = max (res, lsum + rsum + root->val);//get te result of max sum
    return max(lsum, rsum) + root->val;//return max sum
}

int main()
{
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(7);
    root->left->left = new TreeNode(11);
    root->left->right = new TreeNode(-3);
    root->left->right->left = new TreeNode(5);
    root->left->right->right = new TreeNode(14);
    root->right = new TreeNode(6);
    root->right->left = new TreeNode(-7);
    root->right->left->right = new TreeNode(3);

    res = INT_MIN;
    maxSum(root);
    cout << "Maximum Path Sum in Binary Tree: " << res << endl;
    return 0;
}