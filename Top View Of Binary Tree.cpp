/************************************************************

    Following is the TreeNode class structure:

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
#include<bits/stdc++.h>
vector<int> getTopView(TreeNode<int> *root) {
    // Write your code here.
    vector<int>ans;
    if(root==NULL)
        return ans;
    queue<pair<TreeNode<int>*,int>>q;
    map<int ,int>mp;
    q.push({root,0});
    while(!q.empty()){
        auto p = q.front();
        q.pop();
        TreeNode<int>* node = p.first;
        int vertical = p.second;
        if(mp.find(vertical)==mp.end())
            mp[vertical]= node->val;
        if(node->left)
            q.push({node->left,vertical-1});
        if(node->right)
            q.push({node->right,vertical+1});
    }
    for(auto p : mp){
        ans.push_back(p.second);
    }
    return ans;
}