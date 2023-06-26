#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> bottomView(BinaryTreeNode<int> * root){
    vector<int>ans;
    if(root==NULL)
        return ans;
    queue<pair<BinaryTreeNode<int>*,int>>q;
    map<int,int>mp;
    q.push({root,0});
    while(!q.empty()){
        auto p = q.front();
        BinaryTreeNode<int>* node = p.first;
        q.pop();
        int vertical = p.second;
        mp[vertical] = p.first->data;
        if(node->left)
            q.push({node->left,vertical-1});
        if(node->right)
            q.push({node->right,vertical+1});
    }
    for(auto i : mp){
        ans.push_back(i.second);
    }
    return ans;
    // Write your code here.
    
}
