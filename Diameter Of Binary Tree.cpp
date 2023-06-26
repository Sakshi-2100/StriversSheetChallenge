/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include "bits/stdc++.h"
int diameter(TreeNode<int> *root, int &maxi){
    if(root==NULL)
        return 0;
    int left = diameter(root->left, maxi);
    int right = diameter(root->right, maxi);
    maxi = max(maxi, left+right);
    return 1+max(left,right);
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	// Write Your Code Here.
    int maxi = INT_MIN;
    diameter(root, maxi);
    return maxi;
}
